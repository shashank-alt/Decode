#include<iostream>
using namespace std;
int hcf(int a,int b){
    int hcf = 1;
    for(int i = min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Greatest common divisor is: "<<hcf(x,y)<<endl;
}