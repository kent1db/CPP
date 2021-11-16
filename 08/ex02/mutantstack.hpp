#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
private:
	
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;

	MutantStack<T, Container>() : std::stack<T, Container>(){

	}
	MutantStack<T, Container>(MutantStack  const& src) : std::stack<T, Container>(src){
		
	}
	virtual ~MutantStack<T, Container>(){

	}
	MutantStack<T, Container> & operator=(MutantStack<T, Container>  const& rhs){
		std::stack<T, Container>::operator=(rhs);
	}
	iterator begin(void) {
		return (this->c.begin());
	}
	iterator end(void) {
		return (this->c.end());
	}
	reverse_iterator rbegin() {
		return (this->c.rbegin());
	}
	reverse_iterator rend() {
		return (this->c.rend());
	}
};

#endif
