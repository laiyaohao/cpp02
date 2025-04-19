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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif