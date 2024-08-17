#include<iostream>
using namespace std;
int main(){
    int *ptr = NULL;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<(int)'\0'<<endl;
    int *ptr1 = '\0';
    cout<<*ptr1<<endl;
    cout<<ptr1<<endl;
    int *ptr2 = 0;
    cout<<*ptr2<<endl;
    cout<<ptr2<<endl;
    return 0;
}