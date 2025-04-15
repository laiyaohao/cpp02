#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
  Fixed::fixedPoint = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): fixedPoint(other.fixedPoint)
{
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
  if (this != &other)
  {
    fixedPoint = other.fixedPoint;
  }
  std::cout << "Copy assignment constructor called" << std::endl;
  return *this;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function is called" << std::endl;
  return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
  fixedPoint = raw;
}