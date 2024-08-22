//two pointers
#include<iostream>
using namespace std;
void display(int *a,int n ){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
}
void reversePart(int *a,int i,int j){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,3,2,4,3,4,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr,n);
    reversePart(arr,2,6);
    cout<<"\nAfter reversing the part of array from index 2 to 6: ";
    display(arr,n);
    return 0;
}