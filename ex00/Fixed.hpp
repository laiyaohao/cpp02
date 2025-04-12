#ifndef FIXED_HPP
# define FIXED_HPP

# include <bits/stdc++.h>

class Fixed
{
	private:
		int fixedPoint;
		static const int fractional;

	public:
		// default constructor
		Fixed();
		// copy constructor
		Fixed(&Fixed other): fixedPoint(other.fixedPoint);
		// copy assignment operator
		Fixed& operator=(const Fixed &other);
		// destructor
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits(int const raw);
}

#endif