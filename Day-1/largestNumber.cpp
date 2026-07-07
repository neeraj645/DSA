#include<iostream>
using namespace std;

int largeNum(int arr[], int size){
    int value =arr[0];
    for(int i=1; i<size; i++)
        if(value<arr[i]) value=arr[i];
    return value;
}
int main(){
    cout<<"Enter the numbers : ";
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++) cin>>arr[i];
    // for(int i=0; i<num; i++) cout<<arr[i]<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest Number is : "<<largeNum(arr, size);
    
}