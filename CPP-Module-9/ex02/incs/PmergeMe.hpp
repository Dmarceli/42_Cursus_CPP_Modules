#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include <iterator>
class PmergeMe
{
	public:
		PmergeMe(int ac ,char **av);
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe &operator=( PmergeMe const & rhs );
		void error(){std::cout << "Error\n";exit(0);}
		void load_vector(char **av);
		std::vector<unsigned int> merge_vec(std::vector<unsigned int> v);
		std::vector<unsigned int> merge(const std::vector<unsigned int>& left, const std::vector<unsigned int>& right);

	private:
		PmergeMe();
		std::vector<unsigned int> _vec;
		unsigned int _vecsize;
};

#endif 