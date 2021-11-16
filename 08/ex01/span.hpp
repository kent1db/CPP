#ifndef SPAN
#define SPAN

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _vect;
public:
	class full_vec : public std::exception{
		public:
		const char* what() const throw(){
			return ("Can't add more numbers\n");
		}
	}full;
	class empty_vec : public std::exception{
		public:
		const char* what() const throw(){
			return ("There is no span to find\n");
		}
	}empty;	
	Span();
	Span(unsigned int n);
	Span(Span const& src);
	virtual ~Span();
	std::vector<int> getVect(void);
	Span& operator=(Span const& rhs);
	void addNumber(int number);
	int	shortestSpan(void);
	int	longestSpan(void);
	void addRange(std::vector<int>::iterator beg, std::vector<int>::iterator end);
};

#endif
