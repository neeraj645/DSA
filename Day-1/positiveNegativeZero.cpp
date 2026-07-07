#include<iostream>
using namespace std;

string checkValue(int num){
    if(num<0) return "Negative"; else if(num>0) return "Positive"; else return "Zero";
}

int main(){
    int num;
    cin>>num;
    while(cin >> num){
    cout<<checkValue(num)<<endl;
    }
}