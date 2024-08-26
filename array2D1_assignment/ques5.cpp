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
    int maxsum[rows];
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            maxsum[i] += arr[i][j];
        }
    }
    int maximum = INT32_MIN;
    int k;
    for(int i = 0;i<rows;i++){
        if(maxsum[i]>maximum){
            maximum = maxsum[i];
            k = i;
        } 
    }
    cout<<"Row with Maximum sum : ";
    for(int i = 0;i<cols;i++){
        cout<<arr[k][i]<<" ";
    }
    return 0;
}