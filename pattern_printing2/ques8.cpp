#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i+j == n+1) cout<<i<<" ";
            else cout<<"  ";
        }
        for(int k = 2;k<=n;k++){
            if(i==k) cout<<i<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}