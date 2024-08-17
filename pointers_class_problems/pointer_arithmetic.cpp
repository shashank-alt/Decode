#include<iostream>
using namespace std;
int main(){
    int x = 10;//declaration of a variable
    int* ptr = &x;  //pointer is initialised with address of x
    cout<<ptr<<endl;//address of x
    cout<<*ptr<<endl;//acessing value of x
    (*ptr)++; //*ptr = *ptr + 1 increment in value of x
    cout<<*ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;//address of x + 4 (since int size is 4 bytes)
    cout<<*ptr<<endl;
    ptr = ptr -1;
    cout<<ptr<<endl;//address of x - 4 (back to previous address)
    cout<<*ptr<<endl;
    ptr = ptr - 1000; //error: subtraction of an integer from a pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}