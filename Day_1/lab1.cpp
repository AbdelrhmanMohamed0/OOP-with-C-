#include<iostream>
using namespace std;

struct point{
    int num1;
    int num2;
};


int  multiply(int x,int y){
    return (x*y);
}

double  multiply(double x,double y){
    return (x*y);
}

point  multiply(point x,point y){
    point res;
    res.num1=(x.num1)*(y.num1);
    res.num2=(x.num2)*(y.num2);
    return res;
}

int main(void){
point p1,p2={5,2};
p1.num1=5;
p1.num2=2;
cout<<multiply(5,2)<<endl;
cout<<multiply(5.2,2.2)<<endl;
p2=multiply(p1,p2);
cout<<p2.num1<<" "<<p2.num2<<endl;
return 0;
}