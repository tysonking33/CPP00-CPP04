#include "../includes/Fixed.h"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy constructor called\n";
	//*this = src;
    this->setRawBits(src.getRawBits());
}

Fixed& Fixed::operator = (Fixed &obj){
    std::cout << "Copy assignment operator called\n";
	this->setRawBits(obj.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return this->fixedPointValue;
}

void Fixed::setRawBits( int const raw ){
	//std::cout << "setRawBits member function called\n";
	this->fixedPointValue = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}
