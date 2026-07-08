// #include<iostream>
// using namespace std;


// int f(int n, int sum){
//     if(n<=0) return sum;
//     sum+=n;
//     return f(n-1, sum);
// }

// int main(){
//     int n, sum=0;
//     cin>>n;
//     cout<<f(n,sum);
//     return 0;
// }

// // This is called parameterized recursion using a global variable.
// #include<iostream>
// using namespace std;
// int sum=0;
// void f(int n){
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     sum+=n;
//     f(n-1);
// }

// int main(){
//     f(5);
//     return 0;
// }

// Best approach : Functional Recursion
#include<iostream>
using namespace std;

int f(int n){
    if(n<1) return 0;
    return n+f(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
}