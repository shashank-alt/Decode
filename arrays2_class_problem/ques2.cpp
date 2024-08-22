// Write a program to copy the contents of one array into another in the reverse order.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,3,4,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    int arr2[n];
    for(int i = 0; i < n; i++){
        arr2[i] = arr[n-1-i];
    }
    cout << "\nReversed Array: ";
    for(int i=0; i<n; i++){
        cout << arr2[i] << " ";
    }
}