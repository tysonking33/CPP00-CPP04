#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal{
	public:
		WrongCat();
		void makeSound() const;
		~WrongCat();
        WrongCat& operator = (const WrongCat &obj);
        WrongCat (const WrongCat &a);
};

#endif
