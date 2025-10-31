#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = copy._rawBits;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other)
		_rawBits = other._rawBits;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = n << _fractionalBits; // décale l’entier pour stocker la partie fractionnaire
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(f * (1 << _fractionalBits)); // convertit float en fixed-point
}

float Fixed::toFloat(void) const
{
	return _rawBits / float(1 << _fractionalBits); // divise pour récupérer la valeur float
}

int Fixed::toInt(void) const
{
	return _rawBits >> _fractionalBits; // décale à droite pour récupérer la partie entière
}

bool Fixed::operator>(Fixed const &fixed)const
{
	return _rawBits > fixed._rawBits;
}

bool Fixed::operator<(Fixed const &fixed)const
{
	return _rawBits < fixed._rawBits;
}

bool Fixed::operator>=(Fixed const &fixed)const
{
	return _rawBits >= fixed._rawBits;
}

bool Fixed::operator<=(Fixed const &fixed)const
{
	return _rawBits <= fixed._rawBits;
}

bool Fixed::operator==(Fixed const &fixed)const
{
	return _rawBits == fixed._rawBits;
}

bool Fixed::operator!=(Fixed const &fixed)const
{
	return _rawBits != fixed._rawBits;
}

Fixed Fixed::operator+(Fixed const &fixed)const
{
	return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixed)const
{
	return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixed)const
{
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixed)const
{
	return Fixed(toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++()
{
	_rawBits++;
	return *this;
}

Fixed& Fixed::operator--()
{
	_rawBits--;
	return *this;
}
		
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	_rawBits++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_rawBits--;
	return temp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second) ? first : second;
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	return (first < second) ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second) ? first : second;
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	return (first > second) ? first : second;
}