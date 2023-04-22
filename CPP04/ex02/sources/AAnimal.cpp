#include "../includes/AAnimal.h"

std::string AAnimal::getType() const {
	return type;
}

void AAnimal::makeSound() const {}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destroyed\n";
}

AAnimal& AAnimal::operator = (const AAnimal &obj){
    *this = obj;
	return *this;
}

AAnimal::AAnimal (const AAnimal &a){
    *this = a;
}

AAnimal::AAnimal(): type("default AAnimal"){}