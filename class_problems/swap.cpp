#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y;
}