#include<iostream>
using namespace std;

int getPower(int num) {
    if(num == 0)
        return 1;

    int count = 0;

    while(num) {
        count++;
        num /= 10;
    }

    return count;
}

int intPow(int base, int exp) {
    int result = 1;

    while(exp--) {
        result *= base;
    }

    return result;
}

int main() {

    int num;
    cout << "Enter number : ";
    cin >> num;

    int temp = num;
    int power = getPower(num);

    int sum = 0;

    while(num > 0) {
        int digit = num % 10;
        num /= 10;

        sum += intPow(digit, power);
    }

    if(sum == temp)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}