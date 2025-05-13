#include "lab.h"

int main(void)
{
    Student std1;
    int grade[5] = {44, 55, 66, 77, 88};
    int grade1[5] = {11, 12, 13, 14, 15};
    Student std2("Dody", 21, grade);
    cout << std2 << endl;
    cout << "-----------------" << endl;
    cout << std1;
    std1 = std2;
    cout << "-----------------" << endl;
    cout << std1;
    Student std3 = std1;
    std3.set_student_grade(grade1);
    cout << "-----------------" << endl;
    cout << std3;
    cout << "-----------------" << endl;
    cout << std1;
    cout << "-----------------" << endl;
    cout << Student::get_student_number();
    return 0;
}