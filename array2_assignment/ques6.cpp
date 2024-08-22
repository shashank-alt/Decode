#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    vector<int> count(n,1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j == i) continue;
            if(arr[i] == arr[j]){
                count[i]++;
            }
        }
    }
    cout << "Frequency of each element in the array:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " appears " << count[i] << " times" << endl;
    }

    return 0;
}