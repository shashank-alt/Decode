#include<iostream>
using namespace std;
int factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f *= i;
    }
    return f;
}
int permutation(int n, int r){
    int nPr = factorial(n)/factorial(n-r);  //nPr = n!/(n-r)!
    return nPr;
}
int combination(int n, int r){
    int nCr = factorial(n)/(factorial(n-r)*factorial(r));  // nCr = n!/((n-r)!*r!)
}
int main(){
    int n,r;
    cout<<"Enter the n and r: ";
    cin>>n>>r;
    cout<<"n permutation r is: "<<permutation(n,r)<<endl;
    cout<<"n combination r is: "<<combination(n,r)<<endl;
}