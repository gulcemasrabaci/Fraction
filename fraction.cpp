//Gulce's fraction.cpp//
//Copyleft.//


#include "fraction.h"
#include <iostream>
#include <cmath>

Fraction & Fraction::simplify() {
	if (d < 0) 
		n *= -1, d *= -1;
	int divisor = gcd(abs(n), abs(d));
	n /= divisor;
	d /= divisor; 
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fraction &r)
{
	if (r.n == 0)
		return os << "(" << r.n << ")";
	return os << "(" << r.n << "/" << r.d << ")";
}

std::istream &operator>>(std::istream &is, Fraction &r)
{
	is >> r.n >> r.d; 
	r.simplify();
	return is;
}
