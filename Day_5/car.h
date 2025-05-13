#ifndef CAR_H_
#define CAR_H_

#include <iostream>
using namespace std;
#include "engin.h"
#include "tier.h"
#include "driver.h"

class car
{
private:
    string color;
    engin eng[2];
    tiers *tier[4];

public:
    car();
    car(string _color);
    void set_car_color(string color_);
    string get_car_color(void);
    string get_driver_name(driver dr);
    void set_engin(engin *en);
    engin *get_engin(void);
    void set_tier_statues(tiers **tier_);
    tiers **get_tier_statues(void);
};
#endif