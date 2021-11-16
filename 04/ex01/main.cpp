#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	int i;
	const Animal* array[100];

	for (i = 0; i < 50; i++)
	{
		array[i] = new Dog();
	}
	while (i < 100)
	{
		array[i++] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		delete(array[i]);
}
