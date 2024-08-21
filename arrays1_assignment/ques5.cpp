//
#include<iostream>
using namespace std;
int main(){
    int n,smallestMissing;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x = 1;
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i]<0) continue;
        if(x!=arr[i]){
            smallestMissing = x;
            flag = true;
            break;
        }
        else x++;
    }
    if(flag)   cout<<"smallest missing positive element: "<<smallestMissing;
    else cout<<"No missing element";
}