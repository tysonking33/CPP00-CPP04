#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int					_fp_value;
		static const int	_fract_bits = 8;

	public:
	// Constructors
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& copy);

	// Deconstructors
		~Fixed();

	// Overloaded Operators
		Fixed &operator=(const Fixed &src);

		// Comparison Operators
		bool operator>(Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;

		// Arithmetic Operators
		float operator+(Fixed fixed)const;
		float operator-(Fixed fixed)const;
		float operator*(Fixed fixed)const;
		float operator/(Fixed fixed)const;

		// pre-increment Operators
		Fixed operator++();
		Fixed operator--();
		// post-increment Operators
		Fixed operator++(int);
		Fixed operator--(int);

	// Public Methods
		float toFloat(void)const;
		int toInt(void)const;
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);

	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(int const raw);
};

// Overload for ostream
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif