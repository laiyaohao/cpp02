#ifndef FIXED_HPP
# define FIXED_HPP

# include <bits/stdc++.h>

class Fixed
{
	private:
		int fixedPoint;
		static const int fracBits;

	public:
		// default constructor
		Fixed();
		// copy constructor
		Fixed(const Fixed &other);
		// copy assignment operator
		Fixed& operator=(const Fixed &other);
		// destructor
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif