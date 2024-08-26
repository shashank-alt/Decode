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
    int maximum = INT32_MIN;
    for(int i=0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(arr[i][j]>maximum)maximum=arr[i][j];
        }
    }
    cout<<"Maximum element in the matrix: "<<maximum<<endl;
    int minimum = INT32_MAX;
    for(int i=0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(arr[i][j]<minimum)minimum=arr[i][j];
        }
    }
    cout<<"Minimum element in the matrix: "<<minimum;
    return 0;
}