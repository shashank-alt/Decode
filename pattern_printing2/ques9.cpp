#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //star hollow daimond
    for(int i = 1;i<=n-1;i++){
        for(int j = 1;j<=n;j++){
            if(i+j == n+1) cout<<"* ";
            else if(j==n) cout <<"* ";
            else cout<<"  ";
        }
        for(int j = 2;j<=n;j++){
            if(i==j) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j) cout<<"* ";
            else if(i == 1 || j == n) cout<<"* ";
            else cout<<"  ";
        }
        for(int j = 2;j<=n;j++){
            if(i+j==n+1) cout<<"* ";
            else if(i == 1) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}