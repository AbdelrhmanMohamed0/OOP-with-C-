#include<iostream>
using namespace std;

int main(void){
    int **arr = new int*[3];
    for(int i=0;i<3;i++){
        arr[i]=new int [5];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=j+2;
        }
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout <<arr[i][j]<< " ";
        }
    }
    delete[] arr;
    return 0;
}