#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//declaration of vector
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    //input of a vector
    vector<int> v1;
    int q;
    cout<<"Enter the size of a vector: ";
    cin>>q;
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<q;i++){
        cout<<"Enter "<<i+1<<" element: ";
        int x;
        cin>>x;
        v1.push_back(x);
        cout<<"size of vector: "<<v1.size()<<endl;
        cout<<"capacity of vector: "<<v1.capacity()<<endl;
    }
    cout<<endl;
    cout<<"Entered vector is : "<<endl;
    for(int i = 0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    v1.pop_back();
    cout<<endl<<"After popback size of vector: "<<v1.size()<<endl;
    cout<<"capacity of vector: "<<v1.capacity()<<endl;
}
