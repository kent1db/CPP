#include <iostream>
#include <time.h>

class Base {public: virtual ~Base() {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void){
	int ran = rand() % 3;
	if (ran == 0){
		return (new A);
	}
	if (ran == 1){
		return (new B);
	}
	return (new C);
}

void 	identify(Base* p){
	A * a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "It's A\n";
	B * b= dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "It's B\n";
	C * c= dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "It's C\n";
}

void identify(Base& p){
	try{
		(void)dynamic_cast<A &>(p);
		std::cout << "It's A\n";
	}
	catch(std::bad_cast& e){}
	try{
		(void)dynamic_cast<B &>(p);
		std::cout << "It's B\n";
	}
	catch (std::bad_cast& e){}
	try{
		(void)dynamic_cast<C &>(p);
		std::cout << "It's C\n";
	}
	catch (std::bad_cast& e){}
}

int 	main(void){
	srand(time(NULL));
	identify(generate());
	identify(*generate());
	return (0);
}
