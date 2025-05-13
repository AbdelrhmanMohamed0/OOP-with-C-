#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private :

string name;
int age ;
string address;
double grade;

public :

Student(string name_,int age_ ,string address_,double grade_)
{
set_name(name_);
set_age(age_);
set_adderss(address_);
set_grade(grade_);
}

void set_name( string name_){
    if(name_.length()>=7&&name_.length()<=15){
        name=name_;
    }
}
string get_name(void){
    return name;
}
void set_age( int age_){
    if(age_>=19&&age_<=21){
        age=age_;
    }
}
int get_age(void){
    return age;
}
void set_adderss( string address_){
        address=address_;
}
string get_address(void){
    return address;
}
void set_grade( double grade_){
    if(grade_>=0.0 &&grade_<=100.0){
        grade=grade_;
    }
}
double get_grade(void){
    return grade;
}

void Display_data(void){
    cout<<"name is : "<<name <<endl;
    cout<<"address is : "<<address <<endl;
    cout<<"age is : "<<age <<endl;
    cout<<"grade is : "<<grade <<endl;
}

void Grade_states(void){
if(grade>=85.0){
cout<<"success : "<<"A"<<endl;
}
else if(grade>=75){
cout<<"success : "<<"B"<<endl;
}
else if(grade>=65){
cout<<"success : "<<"C"<<endl;
}
else if(grade>=50){
cout<<"success : "<<"D"<<endl;
}
else{
cout<<"fail : "<<"F"<<endl;
}
}

};


int main(void){

Student * st1=new Student("Abdelrhman",20,"Mansoura",99.8);
st1->Display_data();
st1->Grade_states();
st1->set_grade(45);
st1->Display_data();
st1->Grade_states();
st1->set_name("ali");
st1->Display_data();
st1->Grade_states();
st1->set_name("karemaa");
st1->Display_data();
st1->Grade_states();
    return 0;
}

