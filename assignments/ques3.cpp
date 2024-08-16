#include<iostream>
using namespace std;
void odd_numbers(int x, int y){
    for(int i = min(x,y);i<=max(x,y);i++){
        if(i%2!=0) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    odd_numbers(a,b);
}