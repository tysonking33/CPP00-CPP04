#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal{
	protected:
		std::string type;
	public:
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~AAnimal();
        AAnimal& operator = (const AAnimal &obj);
        AAnimal (const AAnimal &a);
        AAnimal();
};

#endif
