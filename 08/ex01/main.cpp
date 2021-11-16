#include "span.hpp"


int		main(void){
	Span sp = Span(9);
try{
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(-4);
	sp.addNumber(21);	
	sp.addNumber(0);
	sp.addNumber(-10);
	Span cp = sp;
	std::cout << "sp : " << sp.shortestSpan() << std::endl;
	std::cout << "sp : " << sp.longestSpan() << std::endl;
	std::cout << "cp : " << cp.shortestSpan() << std::endl;
	std::cout << "cp : " << cp.longestSpan() << std::endl;
	std::vector<int> tmp;
	Span s(5);
	s.addNumber(101);
	tmp.push_back(-42);
	tmp.push_back(12);
	tmp.push_back(54);
	tmp.push_back(4);
	s.addRange(tmp.begin(), tmp.end());
	std::cout << s.longestSpan() << std::endl;
	for (std::vector<int>::iterator it = s.getVect().begin(); it != s.getVect().end(); it++){
		std::cout << *it << std::endl;
	}
}
catch(Span::full_vec& e) {
	std::cerr << e.what() << std::endl;
}
catch(Span::empty_vec& f) {
	std::cerr << f.what() << std::endl;
}

/* ERROR TEST */
// try {
// 	Span err(0);
// 	Span er(1);
// 	err.addNumber(1);
// 	err.longestSpan();
// 	er.longestSpan();
// 	er.shortestSpan();
// }
// catch(Span::full_vec& e) {
// 	std::cerr << e.what() << std::endl;
// }
// catch(Span::empty_vec& f) {
// 	std::cerr << f.what() << std::endl;
// }
}