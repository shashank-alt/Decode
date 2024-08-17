// Write a function to find out the first and last digit of a number without returning anything.
#include<iostream>
using namespace std;
void func(int *ptr){
    int lastDigit = *ptr%10;
    int firstDigit = 0;
    while(*ptr>9){
        *ptr/=10;
    }
    firstDigit = *ptr;
    cout<<"First digit: "<<firstDigit<<"\nLast digit: "<<lastDigit<<endl;

}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    func(&x);

}