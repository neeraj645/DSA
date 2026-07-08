#include<iostream>
// #include <algorithm> // For std::swap
using namespace std;

void swap(int &a, int &b){ // custom function for swap values
    int temp = a;
    a = b;
    b = temp;
}

void reverse(string &str, int start, int end){
    if(start >= end) return;
    swap(str[start], str[end]);
    reverse(str, start+1, end-1);
}


int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    reverse(str, 0, str.size()-1);
    cout<<"Reversed string is : "<<str;
    return 0;
}