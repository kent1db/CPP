#ifndef ITER
#define ITER
#include <iostream>

template <typename T>
void iter(T *arrayAddress, size_t const & arrayLength, void (*function)(T const &)){
	if (arrayAddress == NULL)
		return ;
	for (size_t i = 0; i < arrayLength; i++){
		(*function)(arrayAddress[i]);
	}
}

#endif