#ifndef ENGIN_H_
#define ENGIN_H_
#include<iostream>
using namespace std;

class engin{
private:
int power;
public:
engin();
engin(int power_);
void set_engin_power(int power_);
int get_engin_power(void);
};


#endif