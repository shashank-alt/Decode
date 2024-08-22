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
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i] > arr[i+1]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Array is not sorted";
    else cout<<"Array is sorted";
}