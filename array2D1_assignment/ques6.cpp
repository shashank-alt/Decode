#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the number of rows and cols: ";
    cin>>rows>>cols;
    int arr[rows][cols];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(i==rows/2 || j==cols/2) cout<<arr[i][j] <<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}