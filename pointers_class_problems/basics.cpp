#include<iostream>
using namespace std;
int main(){
    int x;//declaration of a variable
    cout<<x<<endl;//prints garbage value 
    cout<<&x<<endl;//prints address of a variable
    x = 10; //assigning value to x
    cout<<x<<endl;//prints garbage value 
    int* ptr = &x;  //pointer is initialised with address of x
    cout<<ptr<<endl;//address of x
    cout<<*ptr<<endl;//acessing value of x
    *ptr = 20;//changing value of x using dereference operator
    cout<<*ptr<<endl;//acessing value of x using dereference operator
}