#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Year : ";
    int year;
    while(true){
    cin>>year;
     if(year%400==0) cout<<"Leap year"<<endl;
    else if(year%100==0) cout<<"Not leap year"<<endl;
    else if(year%4==0) cout<<"Leap year"<<endl;
    else cout <<"Not leap year"<<endl;
    }
}
// shorthand
//(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)