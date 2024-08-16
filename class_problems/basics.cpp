#include<iostream>
using namespace std;
void greeting(){    //function declaration
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day!"<<endl;
}
void starTriangle(int x){// function with argument
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int sum(int x,int y){// function having a return value
    return x+y;
}
float sum1(int x, float y, int z){// function having a return value
    return x+y+z;
}
float sum2(int x = 4, float y = 0, int z = 0){// arguments having default values
    return x+y+z;
}
int main(){
    greeting();    //function calling
    starTriangle(3);
    cout<<sum(4,9)<<endl;
    cout<<sum1(5,9.4,6)<<endl;
    cout<<sum2();
    
}