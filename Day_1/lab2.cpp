#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    string address;
};

void fill_data(student **arr,int len){
for(int i=0;i<len;i++){
    cout <<"enter student "<<i+1<<" name"<<endl;
    cin>>arr[i]->name;
    cout <<"enter student "<<i+1<<" age"<<endl;
    cin>>arr[i]->age;
    cout <<"enter student "<<i+1<<" address"<<endl;
    cin>>arr[i]->address;
}
}
void display_data(student **arr,int len){
for(int i=0;i<len;i++){
    cout <<"student "<<i+1<<" name is :"<<arr[i]->name<<endl;
    cout <<"student "<<i+1<<" age is :"<<arr[i]->age<<endl;
    cout <<"student "<<i+1<<" address is :"<<arr[i]->address<<endl;
    cout<<"----------------------------------------------------"<<endl;
}
}
int main(void){
    int n;
    cout<<"enter number of student :";
    cin>>n;    
    student **arr = new student*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new student;
    }
    fill_data(arr,n);
    display_data(arr,n);
    delete[] arr;
    return 0;
}