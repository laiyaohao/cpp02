#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
  Fixed::number = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): number(other.number)
{
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
  if (this != &other)
  {
    number = other.number;
  }
  std::cout << "Copy assignment constructor called" << std::endl;
  return *this;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
  std::cout << "Int constructor called" << std::endl;
  number = num << fracBits;
}

Fixed::Fixed(const float num)
{
  std::cout << "Float constructor called" << std::endl;
  number = (int)roundf(num * (1 << fracBits));
}

float Fixed::toFloat(void) const
{
  return (float)number / (float)(1 << fracBits);
}

int Fixed::toInt(void) const
{
  return (int)(number >> fracBits);
}

int Fixed::getRawBits(void) const
{
  return (number);
}

void Fixed::setRawBits(int const raw)
{
  number = raw;
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;
}

bool Fixed::operator<(const Fixed &other) const
{
  return this->number < other.number;
}

bool Fixed::operator>(const Fixed &other) const
{
  return this->number > other.number;
}

bool Fixed::operator<=(const Fixed &other) const
{
  return this->number <= other.number;
}

bool Fixed::operator>=(const Fixed &other) const
{
  return this->number >= other.number;
}

bool Fixed::operator==(const Fixed &other) const
{
  return this->number == other.number;
}

bool Fixed::operator!=(const Fixed &other) const
{
  return this->number != other.number;
}

Fixed Fixed::operator+(const Fixed &other) const
{
  return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
  return Fixed(this->toFloat() - other.toFloat());
}


Fixed Fixed::operator*(const Fixed &other) const
{
  return Fixed(this->toFloat() * other.toFloat());
}


Fixed Fixed::operator/(const Fixed &other) const
{
  return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++()
{
  this->number++;
  return *this;
}

Fixed Fixed::operator++(int)
{
  Fixed	temp(*this);

	this->number++;
	return temp;
}

Fixed &Fixed::operator--()
{
  this->number--;
  return *this;
}

Fixed Fixed::operator--(int)
{
  Fixed	temp(*this);

  this->number--;
  return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
  if (a < b)
    return a;
  return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a < b)
    return a;
  return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
  if (a > b)
    return a;
  return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a > b)
    return a;
  return b;
}