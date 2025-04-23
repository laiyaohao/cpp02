#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
  Fixed::fixedPoint = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
  std::cout << "Copy assignment constructor called" << std::endl;
  if (this != &other)
  {
    fixedPoint = other.getRawBits();
  }
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
