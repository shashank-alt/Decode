#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        //spaces
        for(int k = 1;k<= n-i;k++){
            cout<<"  ";
        }
        //reverse numbers
        for(int j = i;j>=1;j--){
            cout<<(char)(j+64)<<" ";        
        }
        //numbers
        for(int j = 2;j<=i;j++){
            cout<<(char)(j+64)<<" ";        
        }
        cout<<endl;
    }
}