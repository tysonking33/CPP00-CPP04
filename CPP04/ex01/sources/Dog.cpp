#include "../includes/Dog.h"

Dog::Dog(){
	type = "Dog";
}

void Dog::makeSound() const {
	std::cout << "wooooof!\n";
}

Dog::~Dog(){
	std::cout << "Dog done beeen destroyed\n";
}

Dog& Dog::operator = (const Dog &obj){
    *this = obj;
	return *this;
}

Dog::Dog (const Dog &a){
    *this = a;
}