// #include<iostream>
// using namespace std;
// int count = 0;
// void printName(string name, int noOfTime){
//     if(count==noOfTime) return;
//     cout<<"Your name is : "<<name<<" - "<<count+1<<endl;
//     count++;
//     printName(name, noOfTime);
// }
// int main(){
//     string name; 
//     int noOfTime;
//     cout<<"Enter your name : ";
//     cin>>name;
//     cout<<"Enter number of time you want tot print name : ";
//     cin>>noOfTime;
//     printName(name, noOfTime);
//     return 0;
// }

#include<iostream>
using namespace std;

void printName(string name, int num, int curr){
    if(num < curr) return;
    cout<<"Name is : "<<name<<" - "<<curr<<endl;
    printName(name, num, curr+1);
}

int main(){
    string name;
    int num, curr=1;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter no. of times you want to print your name : ";
    cin>>num;
    printName(name, num, curr);
    return 0;
}