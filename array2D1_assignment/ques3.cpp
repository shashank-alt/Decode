#include<iostream>
using namespace std;
int main(){
    int rows,cols,l1,r1,l2,r2;
    cout<<"Enter the number of rows and cols: ";
    cin>>rows>>cols;
    int arr[rows][cols];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the coordinates: "<<endl;
    cin>>l1>>r1>>l2>>r2;
    int sum =0;
    for(int i = l1;i<=l2;i++){
        for(int j = r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of elements: "<<sum<<endl;
    return 0;
}