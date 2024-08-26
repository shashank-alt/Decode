#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the rows of matrix: ";
    cin>>rows;
    cout<<"Enter the columns of matrix: ";
    cin>>cols;
    int arr[rows][cols];
    cout<<"Enter the elements of matrix: ";
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of all elements in the matrix: "<<sum<<endl;
    int prod = 1;
    for(int i=0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            prod *= arr[i][j];
        }
    }
    cout<<"Products of all elements in the matrix: "<<prod;
    return 0;
}