//
#include<iostream>
using namespace std;
int main(){
    int n,maximum,smax;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = false;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag){
        cout<<"Array contains duplicate elements.\n";
        return 0;
    }
    else{
        cout<<"Array does not contains duplicate elements, all are unique.";
    }
    return 0;
    
}