#include<iostream>
using namespace std;
float area(int r){
    return 3.1415*r*r;
}
int main(){
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<area(radius);
}