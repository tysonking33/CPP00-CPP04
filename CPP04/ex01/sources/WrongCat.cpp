#include "../includes/WrongCat.h"

WrongCat::WrongCat(){
	type = "WrongCat";
}

void WrongCat::makeSound() const {
	std::cout << "meowwwwwww???\n";
}

WrongCat::~WrongCat(){
	std::cout << "wrong cat has imploded\n";
}

WrongCat& WrongCat::operator = (const WrongCat &obj){
    *this = obj;
	return *this;
}

WrongCat::WrongCat (const WrongCat &a){
    *this = a;
}