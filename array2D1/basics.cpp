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
    cout<<"Now printing the element of matrix: "<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}