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
  number = num;
}

Fixed::Fixed(const float num)
{
  std::cout << "num:" << (int)num << std::endl;
}
float Fixed::toFloat(void) const
{
  return 0.0;
}

int Fixed::toInt(void) const
{
  return 0;
}

Fixed::operator float() const
{
  return this->toFloat();
}
