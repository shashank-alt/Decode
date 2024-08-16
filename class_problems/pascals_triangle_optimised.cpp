#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows of pascals Triangle: ";
    cin>>n;
    for(int i = 0;i<=n;i++){
        int curr = 1;
        for(int j = 0;j<=i;j++){
            cout<<curr<<" ";
            int next = curr * (i-j)/(j+1);
            curr = next;
        }
        cout<<endl;
    }
}