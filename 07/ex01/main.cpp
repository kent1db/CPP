#include "iter.hpp"
#include <stdio.h>

template<typename T>
void ft_print(T const & to_print){
	std::cout << to_print << std::endl;
}

int 	main(){
	std::string arrays[3] = {"Bonjour", "tout", "le monde"};
	int array[3] = {42, 101, 0};
	size_t len = 3;
	::iter(arrays, len, ft_print);
	::iter(array, len, ft_print);
	return (0);
}
