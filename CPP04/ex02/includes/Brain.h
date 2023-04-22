#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain{
	public:
		std::string ideas[100];
		~Brain();
        Brain& operator = (const Brain &obj);
        Brain (const Brain &a);
        Brain();
};

#endif
