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
    maximum = INT32_MIN;
    smax = INT32_MIN;
    tmax = INT32_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > maximum){
            tmax = smax;
            smax = maximum;
            maximum = arr[i];
        }
        else if(arr[i] > smax && arr[i]!= maximum){
            tmax = smax;
            smax = arr[i];
        }
        else if(arr[i] > tmax && arr[i]!= maximum && arr[i]!= smax){
            tmax = arr[i];
        }
    }
    if(smax = INT32_MIN && tmax = INT32_MIN) cout<<"no second and third largest element: "; 
    if(tmax = INT32_MIN) cout<<"no third largest element: "; 
    else cout<<"The three largest numbers in the array are: "<<maximum<<", "<<smax<<", and "<<tmax<<endl;
    return 0;
}