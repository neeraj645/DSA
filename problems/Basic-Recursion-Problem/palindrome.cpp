#include<iostream>
using namespace std;

bool func(string &str, int start, int end){
    if(start>=end) return true;
    if(str[start] != str[end]) return false;
    return func(str, start+1, end-1);
}

int main(){
    string str = "naman";
    cout<<boolalpha<< func(str, 0, str.size()-1);
    return 0;
}