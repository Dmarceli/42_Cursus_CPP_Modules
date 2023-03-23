#include "PmergeMe.hpp"

void print(std::vector<unsigned int> const &input, int indicator)
{
	if (indicator)
		std::cout << "After: ";
	else
		std::cout << "Before: ";
	size_t i ;
    for (i = 0; i < input.size(); i++) 
		std::cout << input.at(i) << " ";
	std::cout << std::endl;
	
}

long double get_time(){
    timeval tv;

    gettimeofday(&tv, NULL);
	unsigned long micro = tv.tv_usec*(u_int64_t)1000000+tv.tv_usec;
    return micro  / 1000000;
}

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av): _vecsize(ac - 1)
{
	long double vectime;
	long double listime;

	if(_vecsize < 3)
		error();
	load_vector(av);
	print(_vec, 0);
	vectime = get_time();
	_vec = merge_vec(_vec);
	vectime = get_time() - vectime;
	print(_vec, 1);
	std::cout << "Time to process a range of " << _vecsize << " with std::vector : "<< vectime << "µs\n";
	listime = get_time();
	_lis = merge_lst(_lis);
	listime = get_time() - listime;
	std::cout << "Time to process a range of " << _vecsize << " with std::list : "<< listime << "µs\n";
}

PmergeMe::PmergeMe( const PmergeMe & src ){*this = src;}

PmergeMe::~PmergeMe()
{
}

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	this->_vec = rhs._vec;
	this->_vecsize = rhs._vecsize;
	return *this;
}

std::list<unsigned int> PmergeMe::merge_lst(std::list<unsigned int> &lst)
{
	if (lst.size() == 1)
        return lst;
    std::list<unsigned int>::iterator it = lst.begin();
    std::advance(it, lst.size() / 2);
    std::list<unsigned int> left(lst.begin(), it);
    std::list<unsigned int> right(it, lst.end());
    left = merge_lst(left);
    right = merge_lst(right);
	return merge(left, right);
}

std::vector<unsigned int> PmergeMe::merge_vec(std::vector<unsigned int> &v)
{
	if (v.size() == 1)
        return v;
    int mid = v.size() / 2;
    std::vector<unsigned int> left(v.begin(), v.begin() + mid);
    std::vector<unsigned int> right(v.begin() + mid, v.end());
	left = merge_vec(left);
    right = merge_vec(right);
	return merge(left, right);
}

std::list<unsigned int> PmergeMe::merge(const std::list<unsigned int>& left, const std::list<unsigned int>& right)
{
    std::list<unsigned int> result;
    std::list<unsigned int>::const_iterator it_left = left.begin();
    std::list<unsigned int>::const_iterator it_right = right.begin();
    while (it_left != left.end() && it_right != right.end())
    {
        if (*it_left <= *it_right)
            result.push_back(*it_left++);
        else
            result.push_back(*it_right++);
    }
    while (it_left != left.end())
        result.push_back(*it_left++);
    while (it_right != right.end())
        result.push_back(*it_right++);
    return result;
}

std::vector<unsigned int> PmergeMe::merge(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right)
{
    std::vector<unsigned int> result(left.size() + right.size());
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) 
	{
        if (left[i] <= right[j]) 
            result[k] = left[i++];
		else 
            result[k] = right[j++];
        k++;
    }
    while (i < left.size()) 
        result[k++] = left[i++];
    while (j < right.size())
        result[k++] = right[j++];
   return result;
}

void PmergeMe::load_vector(char **av)
{
    for (unsigned int i = 1; i <= _vecsize; i++)
	{
		_vec.push_back(std::atoi(av[i]));
		_lis.push_back(std::atoi(av[i]));
	}
}