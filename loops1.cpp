#include<iostream>
using namespace std;
int main(){
    cout<<"1.";
    for (int i = 1; i < 101; i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"2.";
    for(int i = 0; i < 100; i+=3){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"3.";
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1;i<=10;i++){
        cout<<n*i<<" ";
    }
    cout<<endl;
    cout<<"4.";
    int n1;
    cout<<"Enter the number of terms: ";
    cin>>n1;
    int a = 4;
    for(int i = 1;i<=n1;i++){
        cout<<a<<" ";
        a+=3;
    }
    cout<<endl;
    cout<<"5.";
    int n2;
    cout<<"Enter the number of terms: ";
    cin>>n2;
    int b = 3;
    for(int i = 1;i<=n2;i++){
        cout<<b<<" ";
        b*=4;
    }
    cout<<endl;
    cout<<"6.";
    for(int i = 65;i<=90;i++){
        cout<<i<<" -> "<<(char)i<<endl;
    }
}