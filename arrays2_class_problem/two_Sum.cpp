// Find the doublet in the Array whose sum is equal to the given value x. (LeetCode -1) (Two Sum)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,3,4,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    for(int i = 0;i<size-1;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]+arr[j] == target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}