#include <iostream>
using namespace std;
#include "lab.h"
int main(void)
{
    square s1(4);
    cout << s1.calc_area()<<endl;
    rectangle r1(4, 3);
    cout << r1.calc_area()<<endl;
    circle c1(4);
    cout << c1.calc_area()<<endl;
    shape **arr=new shape*[3];
    arr[0]=&s1;
    arr[1]=&r1;
    arr[2]=&c1;
    photo ph1(arr);
    cout<<ph1.photo_area(3)<<endl;
    return 0;
}
