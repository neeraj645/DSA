#include<iostream>
using namespace std; 

int square(int num){
    return num*num;
}

int main(){
    int num;
    cin>>num;
    cout<<"The square of "<<num<< " is "<< square(num);
}