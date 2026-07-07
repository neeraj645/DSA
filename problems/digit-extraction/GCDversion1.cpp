#include<iostream>
using namespace std;


int GCD(int num1, int num2){
    int value=1;
    if(num1==0) return num2;
    if(num2==0) return num1;
    int low = num2;
    if(num1<num2) low=num1;
    for(int i=1; i<=low; i++)
        if(num1%i==0 && num2%i==0) value=i;
    return value;
}
int main(){
    int num1, num2;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter second number : ";
    cin>>num2;
    cout<<"The HCF is -> "<<GCD(num1, num2);
    return 0;
}