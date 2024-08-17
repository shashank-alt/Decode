#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *ptr1 = &x, *ptr2 = &y;
    cout<<"Enter two numbers: ";
    cin>>*ptr1>>*ptr2;
    cout<<"Sum of two numbers is by using pointers: "<<*ptr1 + *ptr2<<endl;
    cout<<"Sum of two numbers is by using numbers: "<<x+y<<endl;
}