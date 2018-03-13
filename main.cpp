//Gulce's main.cpp containing test codes for the class "Fraction"//
//Copyleft.//

#include <iostream>
#include "fraction.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	

	/*Fraction f1{ 0, 3 };
	cout << f1 << endl;

	Fraction f2{ 1, 3 };
	cout << f2 << endl;

	f1 -= f2;
	cout << f1 << endl;
*/

	Fraction myfraction1 = Fraction::rand();
	cout << "myfraction1 = " << myfraction1 << endl;

	Fraction myfraction2 = Fraction::rand();
	cout << "myfraction2 = " << myfraction2 << endl;

	//double d1 = myfraction1;
	//double d2 = myfraction2;

	//cout << d1 << endl;
	//cout << d2 << endl;



	/*cout << "myfraction1 < myfraction2 --> " << (myfraction1 < myfraction2) << endl;
	cout << "myfraction1 <= myfraction2 --> " << (myfraction1 <= myfraction2) << endl;
	cout << "myfraction1 > myfraction2 --> " << (myfraction1 > myfraction2) << endl;
	cout << "myfraction1 >= myfraction2 --> " << (myfraction1 >= myfraction2) << endl;
	cout << "myfraction1 == myfraction2 --> " << (myfraction1 == myfraction2) << endl;
	cout << "myfraction1 == myfraction1 --> " << (myfraction1 == myfraction1) << endl;
	cout << "myfraction1 != myfraction2 --> " << (myfraction1 != myfraction2) << endl;*/




	//cout << "myfraction1.numerator = " << myfraction1.numerator() << endl;
	//cout << "myfraction1.denominator = " << myfraction1.denominator() << endl;
	//cout << "myfraction2.numerator = " << myfraction2.numerator() << endl;
	//cout << "myfraction2.denominator = " << myfraction2.denominator() << endl;


	/*cout << "myfraction1 + myfraction2 = " << myfraction1 + myfraction2 << endl;
	cout << "myfraction1 - myfraction2 = " << myfraction1 - myfraction2 << endl;
	cout << "myfraction1 * myfraction2 = " << myfraction1 * myfraction2 << endl;
	cout << "myfraction1 / myfraction2 = " << myfraction1 / myfraction2 << endl;
*/
	//cout << "myfraction1++ = " << myfraction1++ << endl;
	//cout << "myfraction1 = " << myfraction1 << endl;
	//cout << "++myfraction1 = " << ++myfraction1 << endl;
	//cout << "myfraction1 = " << myfraction1 << endl;
	//cout << "myfraction1-- = " << myfraction1-- << endl;
	//cout << "myfraction1 = " << myfraction1 << endl;
	//cout << "--myfraction1 = " << --myfraction1 << endl;
	//cout << "myfraction1 = " << myfraction1 << endl;


	//cout << "myfraction2 += myfraction1 =" << (myfraction2 += myfraction1) << endl;
	//cout << "myfraction2 -= myfraction1 =" << (myfraction2 -= myfraction1) << endl;
	//cout << "myfraction2 *= myfraction1 =" << (myfraction2 *= myfraction1) << endl;
	//cout << "myfraction2 /= myfraction1 =" << (myfraction2 /= myfraction1) << endl;

	//cout << "myfraction2 *= -1 =" << (myfraction2 *= -1) << endl;
	//cout << "myfraction2 *= 2 =" << (myfraction2 *= 2) << endl;





	//cout << "/////////////////////////" << endl;

	//Fraction f1{ 3 };
	//cout << f1; 

	//Fraction f2{ 2, -4 };
	//cout << f2;

	//cout << f1 * f2 << endl;

	//cout << f2++ << endl;
	//cout << ++f2 << endl;

	//Fraction f3{ -4 };
	//cout << f3;

	//f3 = 7;

	//cout << f3;

	//cout << f3.numerator() << endl;
	//cout << f3.denominator() << endl;


	//Fraction zerodenom(5, 0);


	return 0; 


}
