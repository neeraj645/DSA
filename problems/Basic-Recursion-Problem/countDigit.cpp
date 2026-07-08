#include<iostream>
using namespace std;

int numSum(int num){
    if(num==0) return 0;
    return 1 + numSum(num / 10);
     
}

int main(){
    int num = 541;
    cout<<numSum(num);
    return 0;
}