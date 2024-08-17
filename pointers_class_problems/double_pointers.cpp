#include<iostream>
using namespace std;
int main(){
    int x= 10;
    int *ptr = &x;
    int **ptr2 = &ptr;
    cout<<x<<endl;//value of x
    cout<<&x<<endl;//adress of x
    cout<<ptr<<endl;//address of x
    cout<<*ptr<<endl;//value of x
    cout<<ptr2<<endl;//address of 1st pointer
    cout<<*ptr2<<endl;//address of x
    cout<<**ptr2<<endl;//value of x
    return 0;
}