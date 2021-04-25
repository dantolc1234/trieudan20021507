#include "fraction.h"

using namespace std;

Fraction::Fraction(double x, double y) {
    assert(y != 0);
    numerator = x; denominator = y;
}

void Fraction::printf() {
        cout << numerator << " / " << denominator << " = " << numerator / denominator; 
}

double Fraction::add() {
    return numerator + denominator;
}

double Fraction::minus() {
    return numerator - denominator;
}

double Fraction::multiply() {
    return numerator * denominator;
}

int main()
{
    Fraction a(4, 16);
    a.printf();
    //double addAnswer = a.add();
    cout << endl << a.add();
    cout << endl << a.minus();
    cout << endl << a.multiply();

    return 0;
}