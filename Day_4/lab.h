#ifndef LAB_H_
#define LAB_H_
#include <iostream>
using namespace std;
#define MAX_GRADES_NUM 5
class Student
{
private:
    string name;
    int age;
    int *grade;
    static int count;

public:
    Student();
    Student(string name_, int age_, int *grade_);
    Student(Student &std);
    void set_name(string name_);
    void set_age(int age_);
    string get_name(void);
    int get_age(void);
    void set_student_grade(int *grade_);
    int *get_student_grade(void);
    static int get_student_number(void);
    void operator=(Student std);
    friend ostream & operator<< (ostream &output,Student std);
    friend istream & operator>> (istream &input,Student &std);
    ~Student();
};

#endif