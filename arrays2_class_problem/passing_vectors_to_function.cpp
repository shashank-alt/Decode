#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){// vectors are passed to arrays by value not by reference
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void change(vector<int>& v){
    v[0] = 45;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    change(v);
    display(v);
}