#ifndef CAT_H
#define CAT_H

#include "AAnimal.h"

class Cat: public AAnimal{
	public:
		Cat();
		void makeSound() const;
		~Cat();
        Cat& operator = (const Cat &obj);
        Cat (const Cat &a);
};

#endif

