#include<iostream>
#include<string>
using namespace std;
string reverse2(string str){
    int n = str.length();
    int start = n/2, end = n-1;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}

string reverse(string str){
    int n = str.length();
    int start = 0, end = n-1;
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;
    return str;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int n = str.length();
    for(int i = 1; i < n; i+=2){
        str[i] = '#';
    }
    cout<<str<<endl;
    //ques2

    string str2;
    cout<<"Enter a string: ";
    getline(cin, str2);
    int i = 0,count = 0;
    while(str2[i] != '\0'){
        if(str2[i] != 'a' && str2[i] != 'e' && str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u'&&
        str2[i] != 'A' && str2[i] != 'E' && str2[i] != 'I' && str2[i] != 'O' && str2[i] != 'U')count++;
        i++;
    }
    cout<<"Number of consonants: "<<count<<endl;

    // ques 3

    string str3;
    cout<<"Enter a string: ";
    getline(cin, str3);
    if (str3 == reverse(str3))
    {
        cout << "String is Palindrome" << endl;
    }
    else cout<<"String is not Palindrome" << endl;

    //ques 4

    string str4;
    cout<<"Enter a string of even length: ";
    if(str4.length()%2){
        cout<<"Error: String should be of even length."<<endl;
        return 0;
    }
    getline(cin, str4);
    str4 = reverse2(str4);
    cout<<str4<<endl;

    //ques 5

    string str5;
    cout<<"Enter a string of less than length 10: ";
    getline(cin, str5);
    int n2 = str5.length();
    if(n2>10){
        cout<<"ERROR: Invalid string";
        return 0;
    }
    int num = 0,ld = 0;
    for(int i=0; i<n2; i++){
        ld = (int)str5[i]-48;
        num *=10;
        num += ld;
    }
    cout<<"After converting string to integer: "<<num<<endl;
}