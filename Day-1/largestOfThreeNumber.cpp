#include<iostream>
using namespace std;

int largeNum(int num1, int num2, int num3){
    if(num1>num2 && num1>num3) return num1;
    if(num2>num1 && num2>num3) return num2;
    else return num3;
}

int main(){
    int num1, num2, num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"Largest number is : "<<largeNum(num1, num2, num3)<<endl;
}