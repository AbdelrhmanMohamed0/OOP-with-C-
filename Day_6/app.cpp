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
    return 0;
}
