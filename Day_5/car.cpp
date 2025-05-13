#include"car.h"

car:: car() :car("red"){

}
car:: car(string _color){
color=_color;
}
void car:: set_car_color(string color_){
color=color_;
}
string car:: get_car_color(void){
return color;
}
string  car:: get_driver_name(driver dr){
return dr.get_driver_name();
}
void car:: set_engin(engin *en){
for(int i=0; i<2;i++){
    eng[i]=en[i];
}
}
engin *  car:: get_engin(void){
static engin temp[2];
for(int i=0; i<2;i++){
    temp[i]=eng[i];
}
return temp;
}
void  car:: set_tier_statues(tiers **tier_){
for(int i=0; i<4;i++){
    tier[i]=tier_[i];
}
}
tiers **  car:: get_tier_statues(void){
return tier;
}