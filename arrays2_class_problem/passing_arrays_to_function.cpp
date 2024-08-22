#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i = 0;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){//arrays are passed by reference into the function by default
    b[0] = 49;
}
int main(){
    int arr[5] = {1,2,3,4,98};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr);
    display(arr,size);
}
//as arraya are passed by refernce means there addresses are passed to the function hence a and b are pointers to arrays