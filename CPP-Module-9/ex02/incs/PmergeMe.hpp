#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include <iterator>
# include <sys/time.h>
# include <algorithm>
# include <list>

class PmergeMe
{
	public:
		PmergeMe(int ac ,char **av);
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe &operator=( PmergeMe const & rhs );
		void error(){std::cout << "Error\n";exit(0);}
		void load_vector(char **av);
		std::vector<unsigned int> merge_vec(std::vector<unsigned int> &v);
		std::list<unsigned int> merge_lst(std::list<unsigned int> &lst);
		std::vector<unsigned int> merge(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right);
		std::list<unsigned int> merge(const std::list<unsigned int>& left, const std::list<unsigned int>& right);
	private:
		PmergeMe();
		std::vector<unsigned int> _vec;
		std::list<unsigned int> _lis;
		unsigned int _vecsize;
};

#endif 