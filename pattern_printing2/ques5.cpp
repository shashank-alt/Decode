#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i = n-1;i>=1;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    int nsp = 1;
    for(int i = 1;i<=n-1;i++){
        int a = 1;
        //alphabets
        for(int j = 1;j<=n-i;j++){
            cout<<a<<" ";
            a++;
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<"  ";
            a++;
        }
        nsp+=2;
        //alphabets
        for(int j = 1;j<=n-i;j++){
            cout<<2*n-a<<" ";
            a++;
        }
        cout<<endl;
    }
}