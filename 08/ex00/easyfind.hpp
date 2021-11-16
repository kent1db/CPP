#ifndef EASY
#define EASY

#include <iostream>
#include <algorithm>

class error : public std::exception
{
	public :
	const char* what() const throw(){
		return ("Not Found\n");
	}
}err;

template<typename T>
typename T::const_iterator easyfind(T const & a, int const & b){
	typename T::const_iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw err;
	return (it);
}

#endif
 