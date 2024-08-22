#include<iostream>
using namespace std;
int main(){
    int n,maximum,smax,tmax;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sumE = 0,sumO = 0;
    for(int i = 0;i<n;i++){
        if(i%2==0) sumE += arr[i];
        else sumO += arr[i];
    }
    cout<<"Difference between sum of elements of odd indices and even indices: "<<sumE - sumO<<endl;
}