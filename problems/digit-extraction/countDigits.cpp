#include<iostream>
// #include<bits/stdc++.h>
using namespace std;


// Another way/
// int countDigit(int num)
// {
//     int digit = (int) (log10(num)+1);
//     return digit;
// }

int countDigit(int num){
    int digit = 0;
    while(num>0){
        num/=10;
        digit++;
    }
    return digit;
}
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    cout<<"Total number of digits are: "<<countDigit(num);
    return 0;
}