#include<iostream>
using namespace std;

int fib(int n){
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}







// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n <= 1)
//         return n;

//     return fib(n-1) + fib(n-2);
// }

// int main() {
//     int terms;

//     cout << "Enter the number of terms: ";
//     cin >> terms;

//     if (terms <= 0) {
//         cout << "Please enter a positive integer." << endl;
//         return 0;
//     }

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < terms; ++i) {
//         cout << fib(i) << " ";
//     }
//     cout << endl;

//     return 0;
// }




