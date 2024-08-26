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
    int maximum = INT32_MIN;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(arr[i][j]>maximum)   maximum = arr[i][j];
        }
    }
    cout<<"Maximum: "<<maximum<<endl;
    return 0;
}