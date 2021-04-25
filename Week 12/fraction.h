#include <iostream>
#include <assert.h>
using namespace std;

class Fraction {
public:
    double numerator;
    double denominator;
    Fraction(double x, double y);
    void printf();
    double add();
    double minus();
    double multiply();
    friend void get_max(Fraction a);
    // Fraction operator<(Fraction a) {
    //     Fraction compare;
    //     if(numerator < a.numerator) compare.numerator = a.numerator;
    //     else compare.numerator = numerator;
    //     if(denominator < a.denominator) compare.denominator = a.denominator;
    //     else compare.denominator = denominator;
    //     return compare;
    // }
};

