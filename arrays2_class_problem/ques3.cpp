//two pointers
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,3,4,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    int i = 0;
    int j = n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "\nReversed Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}