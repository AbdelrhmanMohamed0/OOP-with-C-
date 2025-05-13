#include "lab.h"

int Student::count = 0;
Student::Student() : name(""), age(0)
{
    grade = new int[5];
    for (int i = 0; i < MAX_GRADES_NUM; i++)
    {
        grade[i] = 0;
    }
    count++;
}
Student::Student(string name_, int age_, int *grade_)
{
    name = name_;
    age = age_;
    if (grade_ != NULL)
    {
        grade = grade_;
    }
    else
    {
        grade = new int[5];
        for (int i = 0; i < MAX_GRADES_NUM; i++)
        {
            grade[i] = grade_[i];
        }
    }
    count++;
}
Student::Student(Student &std)
{
    name = std.name;
    age = std.age;
    grade = new int[5];
    for (int i = 0; i < MAX_GRADES_NUM; i++)
    {
        grade[i] = std.grade[i];
    }
    count++;
}

void Student::operator=(Student std)
{
    name = std.name;
    age = std.age;
    for (int i = 0; i < MAX_GRADES_NUM; i++)
    {
        grade[i] = std.grade[i];
    }
}

void Student::set_name(string name_)
{
    name = name_;
}
void Student::set_age(int age_)
{
    age = age_;
}
string Student::get_name(void)
{
    return name;
}
int Student::get_age(void)
{
    return age;
}

int Student ::get_student_number(void)
{
    return count;
}

void Student::set_student_grade(int *grade_)
{
    if (grade_ != NULL)
    {
        grade = grade_;
    }
}
int *Student::get_student_grade(void)
{
    return grade;
}

Student::~Student()
{
    count--;
    delete[] grade;
}

ostream &operator<<(ostream &output, Student std)
{
    output << "student name : " << std.name << endl;
    output << "student age : " << std.age << endl;
    output << "student grades : " << endl;
    for (int i = 0; i < MAX_GRADES_NUM; i++)
    {
        output << std.grade[i] << " ";
    }
    output << endl;
    return output;
}

istream &operator>>(istream &input, Student &std)
{
    input >> std.name;
    input >> std.age;
    for (int i = 0; i < MAX_GRADES_NUM; i++)
    {
        input >> std.grade[i];
    }
    return input;
}