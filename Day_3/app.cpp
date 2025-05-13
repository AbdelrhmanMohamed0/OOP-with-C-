#include <iostream>
#include "lab.h"
using namespace std;

int main(void)
{
    Fraction f1;
    Fraction f2(3, 4);
    f1.Set_Numerator(2);
    f1.Set_Denominator(5);
    cout << "add ";
    Fraction::print((f1 + f2));
    cout << "sub ";
    Fraction::print((f1 - f2));
    cout << "mul ";
    Fraction::print((f1 * f2));
    cout << "div ";
    Fraction::print((f1 / f2));
    Fraction::print(f1);
    cout << "pre incr ";
    Fraction::print((++f1));
    Fraction::print(f1);
    cout << "post incr ";
    Fraction::print((f1++));
    Fraction::print(f1);
    cout << "pre decr ";
    Fraction::print((--f1));
    cout << "post decr ";
    Fraction::print((f1--));
    cout << "> ?" << (f1 > f2) << endl;
    cout << ">= ?" << (f1 >= f2) << endl;
    cout << "< ?" << (f1 < f2) << endl;
    cout << "<= ?" << (f1 <= f2) << endl;
    cout << "== ?" << (f1 == f2) << endl;
    return 0;
}
