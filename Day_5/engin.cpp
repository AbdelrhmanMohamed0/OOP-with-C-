#include"engin.h"

engin:: engin() :engin(1500){

}
engin:: engin(int power_){
power=power_;
}
void engin:: set_engin_power(int power_){
power=power_;

}
int engin:: get_engin_power(void){
return power;
}