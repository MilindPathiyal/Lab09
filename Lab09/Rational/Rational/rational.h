/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */
#ifndef rational_h
#define rational_h



#include <cstdlib>
#include <iostream>
using namespace std;

class Rational{
public:
    Rational();
    Rational(int num, int den);
    void printRational();
    void printRationalAsFloating();
    Rational addition( const Rational &d);
    Rational subtraction(const Rational &d);
    Rational multiplication(const Rational &d);
    Rational division(const Rational &d);
    

    
private:
    int x = 0;
    void reduction();
    int num = 1;
    int den = 1;

    };


#endif /* rational_h */
