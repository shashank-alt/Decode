#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=2*n-1;i++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
    int nsp = 1;
    for(int i = 1;i<=n-1;i++){
        int a = 1;
        //alphabets
        for(int j = 1;j<=n-i;j++){
            cout<<(char)(a+64)<<" ";
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
            cout<<(char)(a+64)<<" ";
            a++;
        }
        cout<<endl;
    }
}