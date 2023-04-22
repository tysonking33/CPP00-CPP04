#include "../includes/Animal.h"
#include "../includes/Dog.h"
#include "../includes/Cat.h"

#include "../includes/WrongAnimal.h"
#include "../includes/WrongCat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	//i->~WrongCat();

	return 0;
}
