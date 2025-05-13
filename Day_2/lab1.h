#ifndef LAB_1_H_
#define LAB_1_H_
#include<iostream>
using namespace std;

class Student
{
private :

string name;
int age ;
string address;
double grade;

public :

Student(string name_,int age_ ,string address_,double grade_);
void set_name( string name_);
string get_name(void);
void set_age( int age_);
int get_age(void);
void set_adderss( string address_);
string get_address(void);
void set_grade( double grade_);
double get_grade(void);
void Display_data(void);
void Grade_states(void);
};

#endif
