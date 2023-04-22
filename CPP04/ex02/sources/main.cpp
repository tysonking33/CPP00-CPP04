#include "../includes/Brain.h"
#include "../includes/Dog.h"
#include "../includes/Cat.h"

int main()
{
	/*const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal *Arr[10];
	for (int i = 0; i < 5; i++)
	{
		Arr[i] = new Dog();
	}
	for (int j = 5; j < 10; j++) 
	{
		Arr[j] = new Cat();
	}

	for (int i = 0; i < 10; i++){
		std::cout << i << ".";
		delete Arr[i];
	}

	return 0;*/
    	// Exercice example
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	// const  AAnimal *d = new AAnimal();

	std::cout << std::endl;

	delete dog;
	delete cat;
	system("leaks ex01");
	std::cout << std::endl;
	std::cout << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	//Dog medor_copy(medor_ref);
	//Cat fifi_copy(fifi_ref);

	//Dog & medor_copy_ref = medor_copy;
	//Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;
	//medor.compareTo(medor_copy_ref);
	//fifi.compareTo(fifi_copy_ref);
	std::cout << std::endl;


	// Array of animals
	const AAnimal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	// This will fail because AAnimal is abstract!
	// const AAnimal a = new AAnimal();
	//system("leaks ex02");
}
