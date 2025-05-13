#include "lab1.h"
int main(void){

Student * st1=new Student("Abdelrhman",20,"Mansoura",99.8);
Student st2("mohamed",19,"Mansoura",44.8);
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
st2.Display_data();
st2.Grade_states();
    return 0;
}

