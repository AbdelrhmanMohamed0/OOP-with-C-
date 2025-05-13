#include"lab1.h"
#include<string.h>
Student:: Student(string name_,int age_ ,string address_,double grade_): name(name_),age(age_),address(address_),grade(grade_)
{
cout<<"all was initialize "<<endl;
}

void Student:: set_name( string name_){
    if(name_.length()>=7&&name_.length()<=15){
        name=name_;
    }
}
string Student:: get_name(void){
    return name;
}
void Student:: set_age( int age_){
    if(age_>=19&&age_<=21){
        age=age_;
    }
}
int Student:: get_age(void){
    return age;
}
void Student:: set_adderss( string address_){
        address=address_;
}
string Student:: get_address(void){
    return address;
}
void Student:: set_grade( double grade_){
    if(grade_>=0.0 &&grade_<=100.0){
        grade=grade_;
    }
}
double Student:: get_grade(void){
    return grade;
}

void Student:: Display_data(void){
    cout<<"name is : "<<name <<endl;
    cout<<"address is : "<<address <<endl;
    cout<<"age is : "<<age <<endl;
    cout<<"grade is : "<<grade <<endl;
}

void Student:: Grade_states(void){
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

