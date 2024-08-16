#include<iostream>
using namespace std;
int factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    cout<<"Enter the number of rows of Pascals Triangle: ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        //Pascal's Triangle (Binomial coefficients)
        for(int j = 0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}