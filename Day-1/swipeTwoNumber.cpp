#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<< "Value before swipe : num1 -> "<<num1<<" num2 -> "<<num2<<endl;
    // with third pary variable
    // int temp;
    // temp=num1;
    // num1=num2;
    // num2=temp;

    // without third party variable
    num1 = num1+num2; // 5 + 10 = 15;
    num2 = num1-num2; // 15 - 10 = 5
    num1 = num1-num2; // 15 - 5 = 10
    cout<< "Value after swipe : num1 -> "<<num1<<" num2 -> "<<num2<<endl;

}