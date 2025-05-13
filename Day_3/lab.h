#ifndef LAB_H
#define LAB_H

class Fraction
{

private:
    int Numerator;
    int Denominator;

public:
    Fraction();
    Fraction(int Numerator_, int Denominator_);

    void Set_Numerator(int Numerator_);
    void Set_Denominator(int Denominator_);
    int Get_Numerator(void);
    int Get_Denominator(void);

    Fraction operator+(Fraction f1);
    Fraction operator-(Fraction f1);
    Fraction operator*(Fraction f1);
    Fraction operator/(Fraction f1);
    Fraction operator++();
    Fraction operator++(int);
    Fraction operator--();
    Fraction operator--(int);
    bool operator>(Fraction f1);
    bool operator<(Fraction f1);
    bool operator>=(Fraction f1);
    bool operator<=(Fraction f1);
    bool operator==(Fraction f1);
    static void print(Fraction f1);
};

#endif
