#ifndef FIXED_HPP
# define FIXED_HPP

# include <bits/stdc++.h>

class Fixed
{
	private:
		int number;
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
    Fixed(const int num);
    Fixed(const float num);
    float toFloat(void) const;
    int toInt(void) const;
    operator float() const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif