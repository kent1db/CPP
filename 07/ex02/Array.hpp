#ifndef ARRAY
#define ARRAY

#include <iostream>

template<typename T>
class Array
{
private:
	T * _array;
	unsigned int _length;
public:
	class limits : public std::exception
	{
		public:
		const char * what() const throw()
		{
			return ("Out of range\n");
		}
	}out;
	Array<T>() {
		_array = NULL;
	}
	Array<T>(unsigned int n) {
		_array= new T[n];
		for (unsigned int i = 0; i < n; i++){
			_array[i] = 0;
		}
		_length = n;
	}
	Array<T>(Array<T> const & inst){
		this = inst;
	}
	~Array<T>() {
		delete []_array;
	}
	Array<T> & operator=(Array<T> const & inst){
		_length = inst._length;
		delete []_array;
		_array = new T[_length];
		for (int i = 0; i < _length; i++)
		{
			_array[i] = inst._array[i];
		}
		return (*this);
	}
	T & operator[](unsigned int i) {
		if (i >= _length)
			throw out;
		return(_array[i]);
	}
	unsigned int const & size(void){
		return (_length);
	}
};

#endif
