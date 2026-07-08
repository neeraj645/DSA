#include <iostream>
using namespace std;

int func(int num, int power){
    if(power==1) return num;
    return num*func(num, power-1);
}

int main(){
    cout<<func(2,5);
    return 0;
}