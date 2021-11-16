#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const	Animal* meta = new Animal();
	const	WrongAnimal* meta2 = new WrongAnimal();
	const	WrongAnimal* h = new WrongCat();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	h->makeSound();
	meta->makeSound();
	meta2->makeSound();
	delete(meta);
	delete(meta2);
	delete(h);
	delete(j);
	delete(i);
}
