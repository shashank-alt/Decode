#include<iostream>
using namespace std;
int main(){
    cout<<"1."<<endl;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<= n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"2.";
    cout<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<= n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"3."<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<= i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    cout<<"4."<<endl;
    for(int i = 1;i<=n+1;i++){
        if(i%2!=0){
            for(int k = 1;k<=i;k++){
                cout<<k<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j = 1;j<= i;j++){
                cout<<(char)(j+64)<<" ";
        }
            cout<<endl;
        }
    }
    cout<<"5."<<endl;
    for(int i = 1;i<= n;i++){
        for(int j = 1;j<= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1;i<= n;i++){
        for(int k = 1; k <= n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"6."<<endl;
    int m;
    cout<<"Enter the number of columns: ";
    cin>>m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(i == 1 || i == n || j == 1 || j == m)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"7."<<endl;
    for(int i = 1; i<= n; i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k = 1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"8."<<endl;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"9."<<endl;
    for(int i = 1;i<=n;i++){
        for(int k = 1;k <= n-i;k++){
            cout<<"  ";
        }
        for(int j = 1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    cout<<"10."<<endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i+1-j<<" ";
        }
        cout<<endl;
    }
    cout<<"11."<<endl;
    for(int i = 1; i<=n-1; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k = 1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i-1; j++){
            cout<<"  ";
        }
        for(int k = 1; k<=n-i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}