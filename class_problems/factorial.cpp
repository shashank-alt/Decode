#include<iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f*=i;
    }
    return f;
}
void fact1(int y){
    int x = 1;
    for(int i = 1;i <= y;i++){
        x*=i;
        cout<<x<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(n)<<endl;
    cout<<"factorial of first "<<n<<" numbers: "<<endl;
    fact1(n);
}