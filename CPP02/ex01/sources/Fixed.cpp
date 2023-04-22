#include "../includes/Fixed.h"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
	fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &src){
    std::cout << "Copy constructor called\n";
	*this = src;
    //this->setRawBits(src.getRawBits());
}

Fixed& Fixed::operator = (const Fixed &obj){
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(obj.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called\n";
	return this->fixedPointValue;
}

void Fixed::setRawBits( int const raw ){
    //std::cout << " setRawBits member function called\n";
	this->fixedPointValue = raw;
}

Fixed::Fixed(int const newConstIntNum): fixedPointValue( newConstIntNum << fractionalBitCount){
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const newConstFloatNum): fixedPointValue(roundf(newConstFloatNum*(1 << fractionalBitCount))){
	std::cout << "Float constructor called\n";
}

float Fixed::toFloat( void ) const{
    float floatValue = (float)(this->fixedPointValue / (float)(1 << fractionalBitCount));
	return (floatValue);
}

int Fixed::toInt( void ) const{
	return (this->fixedPointValue >> fractionalBitCount);
}

std::ostream& operator<<(std::ostream& obj, Fixed const& value){
	obj << value.toFloat();
	return (obj);
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}