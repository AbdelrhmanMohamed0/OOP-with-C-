#ifndef TIRE_H_
#define TIRE_H_
#include<iostream>
using namespace std;

class tiers{
private:
string statues;
public:
tiers();
tiers(string _state);
void set_tire_state(string state_);
string get_tire_state(void);
};

#endif