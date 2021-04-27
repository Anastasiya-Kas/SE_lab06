#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_							
#include <iostream>

using namespace std;

/*!
    @brief Ñomplex number class
*/
class Complex								

{
        /*!
            @brief real part
        */
      	double Re;

        /*!
            @brief Imaginary part
        */							
	double Im;							
public:									//Access type: General 

        Complex (double aRe = 0, double aIm = 0);		        //declaring a record constructor for a mutable real and imaginary part
        Complex (const Complex &);					//copy constructor declaration 
       ~Complex();							//destructor declaration, memory cleanup 

void Set(double aRe, double aIm = 0);					
       operator double();						
       double abs();							//declaration of the method for calculating the modulus of a complex number 

friend istream & operator >> (istream &, Complex &);		        //declaring friendly operators to whom we grant access 
friend ostream & operator << (ostream &, Complex &);		        

       Complex operator + (const Complex &);				//addition operator declaration complex part
       Complex operator - (const Complex &);				//declaration of a complex variable subtraction operator 
       Complex operator + (const double &);				//addition operator declaration real part

friend Complex operator + (const double &, const Complex &); 	        //declaration of a friendly addition operator, one real part and one complex part 
       Complex operator - (const double &);				//subtraction operator declaration real part
friend Complex operator - (const double &, const Complex &);	        //declaration of a friendly subtraction operator, one real part and one complex part
       Complex operator * (const Complex &);				//operator declaration multiplication complex part
       Complex operator * (const double &);				//multiplication operator declaration real part 
friend Complex operator * (const double &, const Complex &);	        //declaration of a friendly multiplication operator, one real part and one complex part
       Complex operator / (const double &);				//division operator declaration real part

       Complex & operator += (const Complex &);				//operator declaration += complex part
       Complex & operator -= (const Complex &);				//operator declaration -= complex part
       Complex & operator *= (const Complex &);				//operator declaration *= complex part
       Complex & operator += (const double &);				//operator declaration += real part
       Complex & operator -= (const double &);				//operator declaration -= real part
       Complex & operator *= (const double &);				//operator declaration *= real part
       Complex & operator /= (const double &);				//operator declaration /= real part
       Complex & operator = (const Complex &);				//assignment operator declaration complex part
       Complex & operator = (const double &);				//assignment operator declaration real part
};
#endif
