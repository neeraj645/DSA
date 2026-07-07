#include<iostream>
using namespace std;

int findLargeNumber(int num1, int num2){
    return num1>num2?num1:num2;
}
int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<<"Largest number is : "<<findLargeNumber(num1, num2)<<endl;
}