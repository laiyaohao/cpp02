#include "Fixed.hpp"

Fixed::fractional = 8;

Fixed::Fixed()
{
  Fixed::fixedPoint = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(&Fixed other): fixedPoint(other.fixedPoint)
{}

Fixed& operator=(const Fixed& other)
{
  if (this != &other)
  {
    delete fixedPoint;
    fixedPoint = other.fixedPoint;
  }
  return *this;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
