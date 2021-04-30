#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;
/**
 *@param aRe - Real part of complex value
 *@param aIm -Imagine part of complex value
 */
Complex :: Complex(double aRe, double aIm)
{
      Re = aRe;
      Im = aIm;
}

Complex :: Complex(const Complex& aRval)
{
      Re = aRval.Re;
      Im = aRval.Im;
}

Complex :: ~Complex()  
/**@brief Destructor for class Complex. Set real and imagine to null
 */  
Complex :: ~Complex()
{
      Re = 0.0;
      Im = 0.0;
}
/**@brief Initialize field of complex class
*/
void Complex :: Set(double aRe, double aIm)
{
      Re = aRe;
      Im = aIm;
}
/**@brief Return the modulus of a complex number
*/
Complex :: operator double()
{
      return abs();
}
/**@brief Return the root of a complex number 
*/
double Complex :: abs()
{
      return sqrt(Re * Re + Im * Im);
}
/**@brief return the result of adding a complex number 
*/
Complex Complex :: operator + (const Complex& aRval)
{
      Complex Result;
      Result.Re = Re + aRval.Re;
      Result.Im = Im + aRval.Im;
      return Result;
}
/**@brief return the result of subtracting a complex number 
*/
Complex Complex :: operator - (const Complex& aRval)
{
      Complex Result;
      Result.Re = Re - aRval.Re;
      Result.Im = Im - aRval.Im;
      return Result;
}
/**@brief return the result of adding a complex number 
*/
Complex Complex :: operator + (const double& aRval)
{
      Complex result;
      Result.Re = Re + aRval;
      Result.Im = Im;
      return Result;
}
/**@brief return the result of subtracting a complex number
*/
Complex Complex :: operator - (const double& aRval)
{
      Complex Result(*this);
      Result.Re = Re - aRval;
      return Result;
}
/**@brief return the result of multiplying a complex number 
*/
Complex Complex :: operator * (const Complex& aRval)
{
      Complex Result;
      Result.Re = Re * aRval.Re - Im * aRval.Im;
      Result.Im = Re * aRval.Im + Im * aRval.Re;
      return Result;
}
/**@brief return the result of multiplying a complex number 
*/
Complex Complex :: operator * (const double& aRval)
{
      Complex Result;
      Result.Re = Re * aRval;
      Result.Im = Im * aRval;
      return Result;
}
/**@brief return the result of dividing a complex number 
*/
Complex Complex :: operator / (const double& aRval)
{
      Complex Result;
      Result.Re = Re / aRval;
      Result.Im = Im / aRval;
      return Result;
}
/**@brief return a pointer to add a complex number 
*/
Complex& Complex :: operator +=  (const Complex& aRval)
{
      Re += aRval.Re;
      Im += aRval.Im;
      return * this;
}
/**@brief return a pointer to subtract a complex number  
*/
Complex& Complex :: operator -= (const Complex& aRval)
{
      Re -= aRval.Re;
      Im -= aRval.Im;
      return * this;
}
/**@brief return a pointer to multiply a complex number 
*/
Complex& Complex :: operator *= (const Complex& aRval)
{
      double tmpRe = Re;
      Re = Re * aRval.Re - Im * aRval.Im;
      Im = Im * aRval.Re + tmpRe * aRval.Im;
      return * this;
}
/**@brief return a pointer to add a real part 
*/
Complex& Complex :: operator += (const double& aRval)
{
      Re += aRval;
      return * this;
}
/**@brief return a pointer to subtract a real part  
*/
Complex& Complex :: operator -= (const double& aRval)
{
      Re -= aRval;
      return * this;
}
/**@brief return a pointer to multiplying a complex number 
*/
Complex& Complex :: operator *= (const  double& aRval)
{
      Re *= aRval;
      Im *= aRval;
      return * this;
}
/**@brief return the division pointer of a complex number
*/
Complex& Complex :: operator /= (const double& aRval)
{
      Re /= aRval;
      Im /= aRval;
      return * this;
}
/**@brief returns a pointer to the assignment of a complex number 
*/
Complex& Complex :: operator = (const Complex& aRval)
      Re = aRval.Re;
      Im = aRval.Im;
      return * this;
}
/**@brief returns a pointer to the assignment of a real part 
*/
Complex& Complex :: operator = (const double& aRval)
{
      Re = aRval;
      Im = 0.0;
      return * this;
}
/**@brief >>operator overloading
*/
istream& operator >> (istream& stream, Complex& aRval)
{
      char tmp[256];
      stream >> aRval.Re >> aRval.Im >> tmp;
      return stream;
}
/**@brief <<operator overloading
*/
ostream& operator << (ostream& stream, Complex& aRval)
{
      stream << aRval.Re;
      if(!(aRval.Im < 0) ) stream << '+';
      stream << aRval.Im << 'i';
      return stream;
}
/**@brief addition operator description a complex number 
*/
Complex operator + (const double& aRval, const Complex& aRval)
{
      Complex Result;
      Result.Re = aRval + aRval.Re;
      Result.Im = aRval.Im;
      return Result;
}
/**@brief subtraction operator description a complex number 
*/
Complex operator - (const double& aRval, const Complex& aRval)
{
      Complex Result;
      Result.Re = aRval - aRval.Re;
      Result.Im =- aRval.Im;
      return Result;
}
/**@brief description of the multiplication operator a complex number 
*/
Complex operator * (const double& aRval, const Complex& aRval)
{
      Complex Result;
      Result.Re = aRval * aRval.Re;
      Result.Im = aRval * aRval.Im;
      return Result;
}
