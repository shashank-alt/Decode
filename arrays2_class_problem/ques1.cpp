// Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,3,4,1,6};
    int idx = -1;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = size-1; i >= 0; i--){
        if(arr[i] == target){
            idx = i;
            break;
        }
    }
    if(idx == -1) cout<<"Element not found";
    else cout<<"Last occurrence of "<<target<<" is at index "<<idx;
    return 0;
}