#include<iostream>
using namespace std;
int main(){
    int rows1,cols1,rows2,cols2;
    cout<<"Enter the rows and columns of matrix 1: ";
    cin>>rows1>>cols1;
    cout<<"Enter the rows and columns of matrix 2: ";
    cin>>rows2>>cols2;
    int arr1[rows1][cols1];
    if(rows1==rows2 && cols1 == cols2){
        cout<<"Enter the elements of matrix 1: ";
        for(int i = 0;i<rows1;i++){
            for(int j = 0;j<cols1;j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter the elements of matrix 2: ";
        int arr2[rows2][cols2];
        for(int i = 0;i<rows2;i++){
            for(int j = 0;j<cols2;j++){
                cin>>arr2[i][j];
            }
        }
        int sum[rows1][cols1];
        for(int i=0;i<rows1;i++){
            for(int j = 0;j<cols1;j++){
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        cout<<"Sum matrix: "<<endl;
        for(int i=0;i<rows1;i++){
            for(int j = 0;j<cols1;j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrices cannot be added. The number of rows and columns must be equal.";
    }
    return 0;
}