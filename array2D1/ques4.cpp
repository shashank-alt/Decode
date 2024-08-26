#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>columns;
    int arr[rows][columns];
    cout<<"Enter the elements of matrix: ";
    // Taking input from the user for each element in the matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    // Displaying the inputted matrix
    cout<<"Inputted matrix: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix: ";
    int trans[columns][rows];
    // Calculating the transpose of the matrix
    for(int i = 0;i<rows;i++){
        for(int j = 0; j<columns; j++){
            trans[j][i] = arr[i][j];
        }
    }
    // Displaying the transpose of the matrix
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}