#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(a>0 && b>0){
        // cout<<"value of a is "<<a<<endl;
        // cout<<"value of b is "<<b<<endl;
        cout<<endl;
        if(a>b) a=a%b;
        else b=b%a;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<endl;
    }
    if(a==0) return b;
    else return a;
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