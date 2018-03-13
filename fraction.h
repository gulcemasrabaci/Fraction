//Gulce's fraction.h//
//Copyleft.//

#pragma once
#include <iosfwd>
#include <cstdlib>
#include <iostream>


class DivideByZero {
};

class Fraction {
	int n, d;
	Fraction &simplify();
public:
	Fraction(int num = 0, int denom = 1) : n{ num }, d{ denom } 
	{
		if (!d)
			throw DivideByZero();
		this->simplify();
	}

	operator double()const{ return static_cast<double>(n) / d; }

	friend bool operator<(const Fraction &r1, const Fraction &r2)
	{
		double d1 = r1;
		double d2 = r2;
		return d1 < d2;
	}

	friend bool operator<=(const Fraction &r1, const Fraction &r2) 
	{
		return !(r2 < r1);
	}

	friend bool operator>(const Fraction &r1, const Fraction &r2) 
	{
		return (r2 < r1);
	}

	friend bool operator>=(const Fraction &r1, const Fraction &r2)
	{
		return !(r1 < r2);
	}

	friend bool operator==(const Fraction &r1, const Fraction &r2)
	{
		return !(r1 < r2) && !(r2 < r1);
	}

	friend bool operator!=(const Fraction &r1, const Fraction &r2)
	{
		return (r1 < r2) || (r2 < r1);
 	}

	friend Fraction operator+(const Fraction &r1, const Fraction &r2)
	{
		Fraction sum{ r1 };
		return sum += r2; 
	}

	friend Fraction operator-(const Fraction &r1, const Fraction &r2)
	{
		Fraction difference{ r1 };
		return difference -= r2;
	}

	friend Fraction operator*(const Fraction &r1, const Fraction &r2)
	{
		Fraction quotient{ r1 };
		return quotient *= r2;
	}

	friend Fraction operator/(const Fraction &r1, const Fraction &r2)
	{
		Fraction divident{ r1 };
		return divident /= r2;
	}

	Fraction &operator+=(const Fraction &r) 
	{
		n = n * r.d + r.n * d;
		d *= r.d;
		simplify();
		return *this;
	}

	Fraction &operator-=(const Fraction &r)
	{
		n = n * r.d - r.n * d;
		d *= r.d;
		simplify();
		return *this;
	}

	Fraction &operator*=(const Fraction &r)
	{
		n *= r.n;
		d *= r.d;
		simplify();
		return *this;
	}

	Fraction &operator/=(const Fraction &r)
	{
		n *= r.d;
		d *= r.n;
		simplify();
		return *this;
	}

	Fraction &operator++()
	{
		return *this += 1;
	}

	Fraction operator++(int) 
	{
		Fraction temp{ *this };
		*this += 1;
		return temp;
	}

	Fraction &operator--()
	{
		return *this -= 1;
	}

	Fraction operator--(int)
	{
		Fraction temp{ *this };
		*this -= 1;
		return temp;
	}

	static int gcd(int a, int b) {
		int small = a;
		int big = b;
		if (a > b)
			small = b, big = a;
		if (small == 0)
			return big;
		for (int k = small; k > 0; --k)
			if (small % k == 0 && big % k == 0)
				return k;
	}

	static Fraction rand()
	{
		Fraction random{ -10 + std::rand()%21 , -10 + std::rand()%21 };
		return random;
	}

	int numerator()const { return n; }
	int denominator()const { return d; }
	
	friend std::ostream &operator<<(std::ostream &, const Fraction &);
	friend std::istream &operator>>(std::istream &, Fraction &);
};

