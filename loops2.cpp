#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"1.";
    int t= 10;
    while (t/=2){
        cout<<"Hello"<<endl;
    }
    cout<<"2.";
    for (int i = 1; i*i < 10; i++){
        cout<<"In for loop"<<endl;
    }
    cout<<"3.";
    int x = 10, y = 0;
    while(x>=y){
        x--;
        y++;
        cout<<x<<" "<<y<<endl;
    }
    cout<<"4.";
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int lastDigit = 0,sum = 0;
    while(number>0){
        lastDigit = number % 10;
        if(lastDigit%2==0){
            sum += lastDigit;
        }
        number /= 10;
    }
    cout<<"Sum of even digits: "<<sum<<endl;
    cout<<"5.";
    int number1;
    cout<<"Enter the number: ";
    cin>>number1;
    int lastDigit1 = 0,reverse = 0,temp = number1;
    while(temp>0){
        lastDigit1 = temp % 10;
        reverse *= 10;
        reverse += lastDigit1;
        temp /= 10;
    }
    cout<<"Sum of given number and its reverse: "<<reverse+number1<<endl;
    cout<<"6.";
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factorial = 1;
    for(int i = 1;i<= n;i++){
        factorial *= i;
        cout<<factorial<<endl;
    }
    cout<<"7.";
    int n1;
    cout<<"enter the number: ";
    cin>>n1;
    int a = 1,b = 1,sum1 = 0;
    cout<<a<<" "<<b<<" ";
    for(int i = 1;i<=n-2;i++){
        sum1 = a + b;
        a = b;
        b = sum1;
        cout<<sum1<<" ";
    }
    cout<<endl;
    cout<<"8.";
    for(int i = 1;i <= 500;i++){
        int x = 0,temp = i;
        while(temp>0){
            int m = temp % 10;
            x += m*m*m;
            temp /= 10;
        }
            if(x == i){
                cout<<i<<endl;
            }
    }
    return 0;

}