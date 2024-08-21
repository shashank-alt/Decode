//finding second maximum in one pass
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
    maximum = INT32_MIN;
    smax = INT32_MIN;
    for(int i = 0;i<n; i++){
        if(arr[i]>maximum){
            smax = maximum;
            maximum = arr[i];
        }
        else{
            smax = max(smax,arr[i]);
        }
    }
    cout<<"Maximum element: "<<maximum<<endl;  //uncomment this line to see maximum element in the array
    cout<<"Second maximum element: "<<smax<<endl;
    return 0;
}