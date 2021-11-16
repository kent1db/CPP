#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	// std::cout << mstack.top() << std::endl;
	mstack.pop();
	// std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>cpy = mstack;
	// MutantStack<int>::iterator itc = cpy.begin();
	// MutantStack<int>::iterator itec = cpy.end();
	// while(itc != itec){
	// 	std::cout << *itc << std::endl;
	// 	itc++;
	// }
	MutantStack<int>::reverse_iterator ritc = cpy.rbegin();
	MutantStack<int>::reverse_iterator ritec = cpy.rend();
	while(ritc != ritec){
		std::cout << *ritc << std::endl;
		ritc++;
	}
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// std::cout << *it << std::endl;
	// ++it;
	// }

	std::stack<int> s(mstack);
	return 0;
}
