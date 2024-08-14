#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //star V
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        for(int j = 2;j<=n;j++){
            if(i+j==n+1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}