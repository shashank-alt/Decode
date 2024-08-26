#include<iostream>
using namespace std;
int main(){
    int stud,subj;
    cout<<"Enter the no. of students: ";
    cin>>stud;
    cout<<"Enter the no. of subjects: ";
    cin>>subj;
    int arr[stud][subj];
    cout<<"Enter the roll no. and marks: ";
    for(int i = 0;i<stud;i++){
        for(int j = 0;j<subj;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Now printing the element of matrix: "<<endl;
    for(int i = 0;i<stud;i++){
        for(int j = 0;j<subj;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}