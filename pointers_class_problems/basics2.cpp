#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr1 = &x;
    cout<<x<<" "<<ptr1<<endl;
    float y = 6.0;
    float *ptr2 = &y;
    cout<<y<<" "<<ptr2<<endl;
    char ch = 'a';
    char *ptr3 = &ch;
    cout<<ch<<" "<<&ch<<endl;
    bool b = false;
    bool *ptr4 = &b;
    cout<<b<<" "<<ptr4<<endl;
    return 0;
}