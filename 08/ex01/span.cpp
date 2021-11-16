#include "span.hpp"

Span::Span(void) : _n(42){

}

Span::Span(unsigned int n) : _n(n){

}

Span::~Span(void){

}

Span::Span(Span const& src){
	*this = src;
}

Span&	Span::operator=(Span const& rhs){
	_n = rhs._n;
	_vect = rhs._vect;
	return *this;
}

void Span::addNumber(int number){
	if (_vect.size() == _n)
		throw full;
	_vect.push_back(number);
}

int	Span::shortestSpan(void){
	std::vector<int>::iterator it;
	int min = 0;
	if (_vect.size() <= 1)
		throw empty;
	std::vector<int> temp = _vect;
	std::sort(temp.begin(), temp.end());
	for (it = temp.begin(); it != temp.end(); ++it){
		if (it == temp.begin() + 1)
			min = *it - *(it - 1);
		if (*it - *(it - 1) < min)
			min = *it - *(it - 1);
	}
	return (min);
}

int	Span::longestSpan(void){
	if (_vect.size() <= 1)
		throw empty;
	int min = *std::min_element(_vect.begin(), _vect.end());
	int max = *std::max_element(_vect.begin(), _vect.end());
	return (max - min);
}

void Span::addRange(std::vector<int>::iterator beg, std::vector<int>::iterator end){
	unsigned int range = 0;
	for (std::vector<int>::iterator it = beg; it != end; it++)
		range++;
	if (_n - _vect.size() < range){
		throw full;
	}
	while(beg != end){
		_vect.push_back(*beg);
		beg++;
	}
}

std::vector<int> Span::getVect(void){
	return (_vect);
}
