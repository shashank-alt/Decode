#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int prod = 1;
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    cout<<"product of the array elements: "<<prod;
}