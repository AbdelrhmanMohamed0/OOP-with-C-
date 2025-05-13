#include"car.h"
int main (void){
car c1;
tiers **t=new tiers*[4];
    for (int i = 0; i < 4; i++) {
        t[i] = new tiers(); 
    }
t[0]->set_tire_state("good");
t[1]->set_tire_state("good");
t[2]->set_tire_state("good");
t[3]->set_tire_state("bad");
engin e[2];
e[0].set_engin_power(1500);
e[1].set_engin_power(2000);
driver d("mohamed");
c1.set_engin(e);
c1.set_tier_statues(t);
engin *en=new engin[2];
en=c1.get_engin();
tiers **tir=new tiers*[4];
    for (int i = 0; i < 4; i++) {
        t[i] = new tiers(); 
    }
tir=c1.get_tier_statues();
cout<<"car color is "<<c1.get_car_color()<<endl;
cout<<"driver name is "<<c1.get_driver_name(d)<<endl;
for(int i=0;i<2;i++){
cout<<"engin "<<i+1<<"power is "<<en[i].get_engin_power()<<endl;
}
for(int i=0;i<4;i++){
cout<<"tier "<<i+1<<" status is "<<tir[i]->get_tire_state()<<endl;
}
    for (int i = 0; i < 4; i++) {
        delete t[i];
        delete tir[i];
    }
    delete[] t;
    delete[] en;
    return 0;
}