#include<iostream>
using namespace std;
int main(){
    cout<<"1.";
    int amount;
    cout<<"Enter the amount of money: ";
    cin>>amount;
    switch (1){
    case 1:
        if(amount/500){
            cout<<"500 notes: "<<amount/500<<endl;
            amount %= 500;
            }
    case 2:
        if(amount/200){
            cout<<"200 notes: "<<amount/200<<endl;
            amount %= 200;
            }
    case 3:
        if(amount/100){
            cout<<"100 notes: "<<amount/100<<endl;
            amount %= 100;
        }
    case 4:
        if(amount/50){
            cout<<"50 notes: "<<amount/50<<endl;
            amount %= 50;
        }
    case 5:
        if(amount/20){
            cout<<"20 notes: "<<amount/20<<endl;
            amount %= 20;
        }
    case 6:
        if(amount/10){
            cout<<"10 notes: "<<amount/10<<endl;
            amount %= 10;
        }
    case 7:
        if(amount/5){
            cout<<"5 coins: "<<amount/5<<endl;
            amount %= 5;
        }
    case 8:
        if(amount/2){
            cout<<"2 notes: "<<amount/2<<endl;
            amount %= 2;
            }
    case 9:
        if(amount){
            cout<<"1 notes: "<<amount<<endl;
            break;
            }
    }
    cout<<"2.";
    int a=5,b,c;
    b = a = 15;
    c = a < 15;
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    cout<<"3.";
    int x = 3;
    float y = 3.0;
    if(x==y)
    cout<<"x and y are equal."<<endl;
    else
    cout<<"x and y are not equal."<<endl;
    cout<<"4.";
    int test = 0;
    cout<<"First character "<<'1'<<endl;
    cout<<"Second character "<<(test?3:'1')<<endl;
    cout<<"5.";
    int m = 18,n = 22;
    bool t = (m>20 && n<15)?true:false;
    cout<<"Value of t: "<<t<<endl;
    cout<<"6.";
    int number = -4;
    char result;
    result = number > 0 ? 'P' : 'N';
    cout << result << endl;
    return 0;
}