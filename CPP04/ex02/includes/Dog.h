#ifndef DOG_H
#define DOG_H

#include "AAnimal.h"

class Dog: public AAnimal{
	public:
		void makeSound() const;
		~Dog();
        Dog& operator = (const Dog &obj);
        Dog (const Dog &a);
        Dog();
};

#endif
