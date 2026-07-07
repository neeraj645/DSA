#include<iostream>
using namespace std;

string checkEvenOdd(int num){
    if(num%2==0)
    return "Even";
    else return "Odd";
}

int main(){
    // while(true){
    int num;
    cin>>num;
    cout<<"The given number is : "<<checkEvenOdd(num)<<endl;
    // }
}