#include<iostream>
using namespace std;

int reverseNum(int num){
    int revNum = 0;
    while(num>0){
        revNum = (revNum*10)+num%10;
        num=num/10;
    }
    return revNum;
}


int main(){

    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"reverse number is : "<< reverseNum(num);
    return 0;
}