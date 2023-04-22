#include "../includes/Brain.h"

Brain::~Brain(){
	std::cout << "Brain destroyed\n";
}

Brain& Brain::operator = (const Brain &obj){
    *this = obj;
	return *this;
}

Brain::Brain (const Brain &a){
    *this = a;
}

Brain::Brain(){}