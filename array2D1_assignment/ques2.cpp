#include<iostream>
using namespace std;
int main(){
    int rows1, rows2,cols1,cols2;
    cout<<"Enter the number of rows and columns for the first matrix: ";
    cin>>rows1>>cols1;
    cout<<"Enter the number of rows and columns for the second matrix: ";
    cin>>rows2>>cols2;
    if(rows1==rows2 && cols1==cols2){
        int mat1[rows1][cols1], mat2[rows1][cols1], result[rows1][cols1];
        cout<<"Enter the elements of the first matrix: ";
        for(int i=0; i<rows1; i++){
            for(int j=0; j<cols1; j++){
                cin>>mat1[i][j];
            }
        }
        cout<<"Enter the elements of the second matrix: ";
        for(int i=0; i<rows2; i++){
            for(int j=0; j<cols2; j++){
                cin>>mat2[i][j];
            }
        }
        cout<<"The Sum of the matrices is: "<<endl;
        for(int i=0; i<rows1; i++){
            for(int j=0; j<cols2; j++){
                result[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        cout<<"The Sum of the matrices is: "<<endl;
        for(int i=0; i<rows1; i++){
            for(int j=0; j<cols2; j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrices can't be added. The number of rows and columns should be equal.";
    }
}