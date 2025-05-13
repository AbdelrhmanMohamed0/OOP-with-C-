#ifndef DRIVER_H_
#define DRIVER_H_

#include<iostream>
using namespace std;

class driver{
private:
string name;
public:
driver();
driver(string _name);
void set_driver_name(string name_);
string get_driver_name(void);
};

#endif