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
    int min = arr[0];
    for(int i = 0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum element in the array is: "<<min<<endl;
    return 0;
}