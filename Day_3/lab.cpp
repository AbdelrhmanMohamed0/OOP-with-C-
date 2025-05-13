#include <iostream>
#include "lab.h"
using namespace std;

Fraction::Fraction() : Numerator(0), Denominator(1) {}
Fraction::Fraction(int Numerator_, int Denominator_) : Numerator(Numerator_), Denominator(Denominator_) {}

void Fraction::Set_Numerator(int Numerator_)
{
    Numerator = Numerator_;
}
void Fraction::Set_Denominator(int Denominator_)
{
    Denominator = Denominator_;
}
int Fraction::Get_Numerator(void)
{
    return Numerator;
}
int Fraction::Get_Denominator(void)
{
    return Denominator;
}

Fraction Fraction::operator+(Fraction f1)
{
    int Denominator_ = Denominator * f1.Denominator;
    int Numerator_ = (Denominator * f1.Numerator) + (Numerator * f1.Denominator);
    return Fraction(Numerator_, Denominator_);
}

Fraction Fraction::operator-(Fraction f1)
{
    int Denominator_ = Denominator * f1.Denominator;
    int Numerator_ = (Numerator * f1.Denominator) - (Denominator * f1.Numerator);
    return Fraction(Numerator_, Denominator_);
}
Fraction Fraction::operator*(Fraction f1)
{
    int Denominator_ = Denominator * f1.Denominator;
    int Numerator_ = Numerator * f1.Numerator;
    return Fraction(Numerator_, Denominator_);
}
Fraction Fraction::operator/(Fraction f1)
{
    Fraction temp(f1.Denominator, f1.Numerator);
    int Denominator_ = Denominator * temp.Denominator;
    int Numerator_ = Numerator * temp.Numerator;
    return Fraction(Numerator_, Denominator_);
}
Fraction Fraction::operator++()
{
    Numerator = Numerator + Denominator;
    return Fraction(Numerator, Denominator);
}
Fraction Fraction::operator++(int)
{
    int Denominator_ = Denominator;
    int Numerator_ = Numerator;
    Numerator = Numerator + Denominator;
    return Fraction(Numerator_, Denominator_);
}
Fraction Fraction::operator--()
{
    Numerator = Numerator - Denominator;
    return Fraction(Numerator, Denominator);
}
Fraction Fraction::operator--(int)
{
    int Denominator_ = Denominator;
    int Numerator_ = Numerator;
    Numerator = Numerator - Denominator;
    return Fraction(Numerator_, Denominator_);
}
bool Fraction::operator>(Fraction f1)
{
    return (((float)Numerator / Denominator) > ((float)f1.Numerator / f1.Denominator));
}
bool Fraction::operator<(Fraction f1)
{
    return (((float)Numerator / Denominator) < ((float)f1.Numerator / f1.Denominator));
}
bool Fraction::operator>=(Fraction f1)
{
    return (((float)Numerator / Denominator) >= ((float)f1.Numerator / f1.Denominator));
}
bool Fraction::operator<=(Fraction f1)
{
    return (((float)Numerator / Denominator) <= ((float)f1.Numerator / f1.Denominator));
}
bool Fraction::operator==(Fraction f1)
{
    Fraction temp(Numerator, Denominator);
    if ((Numerator <= f1.Numerator) && (Denominator <= f1.Denominator))
    {
        return true;
    }
    else if (((temp / f1).Denominator == 1) && ((temp / f1).Numerator == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Fraction::print(Fraction f1)
{
    cout << f1.Numerator << " / " << f1.Denominator << endl;
}
