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
    number = other.getRawBits();
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
  // 1 << 8 means shifting 00000001 8 times to the left 
  // --> 00000001 00000000 ==> 256
  /**
   *  multiplying the floating-point number by 2^8 (256) 
   * would shift the decimal point 8 places to the right, 
   * effectively converting the fractional part to an integer 
   * representation with 8 bits of precision.
   */
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
  // std::cout << "getRawBits member function is called" << std::endl;
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
