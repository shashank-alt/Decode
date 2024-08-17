#include<iostream>
using namespace std;
int main(){
    cout<<"1."<<endl;
    int x,y;
    int *ptr1 = &x, *ptr2 = &y;
    cout<<"Enter two numbers: ";
    cin>>*ptr1>>*ptr2;
    cout<<"Product of two numbers is by using pointers: "<<(*ptr1) * (*ptr2)<<endl;
    cout<<"Product of two numbers is by using numbers: "<<x*y<<endl;
    cout<<"2."<<endl;
    int *p,q;
    cout<<"p is a pointer and q is an integer."<<endl;
    cout<<"3."<<endl;
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout<<*ptr<<" "<<a<<" "<<b;
    cout<<"4."<<endl;
    int m = 15, n = 20;
    int *ptr3 = &m;
    int *ptr4 = &n;
    *ptr3 = *ptr4;
    cout<<*ptr3<<" "<<*ptr4<<endl;
    cout<<"a will get value of b"<<endl;
    // cout<<"5."<<endl;
    // int o = 10, s = 20;
    // int *ptr5;
    // *ptr5 = 5;
    // cout<<"any address is not assinged to pointer";
}