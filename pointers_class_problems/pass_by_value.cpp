#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping in void function: "<<a<<" and "<<b<<endl;
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before swapping: "<<x<<" and "<<y<<endl;
    swap(x,y);
    cout<<"After swapping in main function: "<<x<<" and "<<y<<endl;
}