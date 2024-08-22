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
    int i = 0;
    int j = n-1;
    while (i<j){
        if(arr[i] != arr[j]){
            cout<<"Array is not a pallindrome";
            return 0;
        }
        i++;
        j--;
    }
    cout << "Array is a pallindrome";
    return 0;
}