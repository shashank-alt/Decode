#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int *ptr = arr;//ptr = &arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    *ptr = 56;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    (*ptr) = 23;
    ptr++;
    (*ptr) = 58;
    ptr--;
    for(int i = 0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
    cout<<endl;
    for(int i = 0;i<5;i++){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<5;i++){
        cout<<i[arr]<<" ";
    }
    return 0;
}