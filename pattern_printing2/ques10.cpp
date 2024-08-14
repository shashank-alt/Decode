#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int nsp = 2*(n-1)-1;
    for(int i = 1;i<= n-1;i++){
        for(int j = 1;j<= i;j++){
            cout<<"* ";
        }
        for(int k = nsp;k>=1;k--){
            cout<<"  ";
        }
        for(int j = 1;j<= i;j++){
            cout<<"* ";
        }
        nsp-=2;
        cout<<endl;
    }
    for(int i = 1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i = 1;i<=2*n-1;i++){
        cout<<"* ";    
    }
    cout<<endl;
    nsp = 1;
    for(int i = 1;i<=n-1;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int k = 1;k<=nsp;k++){
            cout<<"  ";
        }
        for(int j = 1;j<=n-i;j++){
            cout<<"* ";
        }
        nsp+=2;
        cout<<endl;
    }
}