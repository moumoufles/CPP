#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _rawBits;
	static const int _fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	Fixed(const int n);
	Fixed(const float f);

	bool operator>(Fixed const &fixed)const;
	bool operator<(Fixed const &fixed)const;
	bool operator>=(Fixed const &fixed)const;
	bool operator<=(Fixed const &fixed)const;
	bool operator==(Fixed const &fixed)const;
	bool operator!=(Fixed const &fixed)const;

	Fixed operator+(Fixed const &fixed)const;
	Fixed operator-(Fixed const &fixed)const;
	Fixed operator*(Fixed const &fixed)const;
	Fixed operator/(Fixed const &fixed)const;

	Fixed& operator++();
	Fixed& operator--();
		
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif