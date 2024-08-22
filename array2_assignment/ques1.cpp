#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x,count = 0;
    cout<<"Enter the element: ";
    cin>>x;
    for(int i = 0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<"The number of elements greater than "<<x<<" is: "<<count<<endl;
    return 0;
}