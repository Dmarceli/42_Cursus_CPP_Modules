#include "PmergeMe.hpp"

void print(std::vector<unsigned int> const &input)
{
    for (size_t i = 0; i < input.size(); i++) 
	{
		std::cout << input.at(i);
		if (i != input.size() - 1)
        	std::cout << ',';
		else
			std::cout << '\n';
    }
}

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(int ac, char **av): _vecsize(ac - 1)
{
	(void)av;
	if(_vecsize < 3)
		error();
	//load_vector(av);
	_vec.push_back(1);
	_vec.push_back(6);
	_vec.push_back(2);
	_vec.push_back(77);
	_vec.push_back(7);
	_vec.push_back(8);
	print(_vec);
	_vec = merge_vec(_vec);
	print(_vec);
}

PmergeMe::PmergeMe( const PmergeMe & src )
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}


PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	this->_vec = rhs._vec;
	this->_vecsize = rhs._vecsize;
	return *this;
}

std::vector<unsigned int> PmergeMe::merge_vec(std::vector<unsigned int> v)
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

std::vector<unsigned int> PmergeMe::merge(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right)
{
    std::vector<unsigned int> result(left.size() + right.size());
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) 
	{
        if (left[i] <= right[j]) 
		{
            result[k] = left[i];
            i++;
        } 
		else 
		{
            result[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < left.size()) {
        result[k] = left[i];
        i++;
        k++;
    }
    while (j < right.size()) {
        result[k] = right[j];
        j++;
        k++;
    }
   return result;
}

void PmergeMe::load_vector(char **av)
{
    for (unsigned int i = 1; i <= _vecsize; i++) 
		_vec.push_back(std::atoi(av[i]));
}