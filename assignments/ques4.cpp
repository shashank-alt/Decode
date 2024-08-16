#include<iostream>
using namespace std;
void no_of_digits(int x){
    int count = 0,y = x;
    while(y != 0){
        y = y/10;
        count++;
    }
    cout<<"Number of digits: "<<count<<endl;
    cout<<"Square of number: "<<x*x<<endl;
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    no_of_digits(number);
}