#include<iostream>
using namespace std;
int main(){
    cout<<"1.";
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Greater number is: ";
    if(a<b){
        cout<<b;
    }
    else{
        cout<<a;
    }
    cout<<endl;
    cout<<"2.";
    int radius;
    cout<<"Enter radius: ";
    cin>>radius;
    int circumference, area;
    circumference = 2*3.1415*radius;
    area = 3.1415*radius*radius;
    if(circumference>area){
        cout<<"Circumference is greater than area";
    }
    else if(circumference<area){
        cout<<"Circumference is less than area";
    }
    else{
        cout<<"Circumference is equal to area";
    }
    cout<<endl;
    cout<<"3.";
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0){
        cout<<"Year is leap";
    }
    else{
        cout<<"Year is not leap";
    }
    cout<<endl;
    cout<<"4.";
    int length,breadth;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    int perimeter, area1;
    perimeter = 2*(length+breadth);
    area1 = length*breadth;
    if(perimeter>area1){
        cout<<"Perimeter is greater than area";
    }
    else if(perimeter<area1){
        cout<<"Perimeter is less than area";
    }
    else{
        cout<<"Perimeter is equal to area";
    }
    cout<<endl;
    cout<<"5.";
    int x,y,z;
    cout<<"Enter the sides of a triangle: ";
    cin>>x>>y>>z;
    if(x==y){
        if(y==z){
            cout<<"Triangle is equilateral";
        }
    }
    else if(x==z){
        cout<<"Triangle is isosceles";
    }
    else if(y==z){
        cout<<"Triangle is isosceles";
    }
    else{
        cout<<"Triangle is scalene";
    }
    cout<<endl;
    cout<<"6.";
    int marks1, marks2, marks3;
    cout<<"Enter the marks of three students: ";
    cin>>marks1>>marks2>>marks3;
    if(marks1>marks2){
        if(marks2>marks3){
            cout<<"Third student has lowest marks";
        }
        else{
            cout<<"Second student has lowest marks";
        }
    }
    else{
        if(marks1>marks3){
            cout<<"Third student has lowest marks";
        }
        else{
            cout<<"First student has lowest marks";
        }
    }
    cout<<endl;
    cout<<"7.";
    int m,n;
    cout<<"Enter the coordinates of a point: ";
    cin>>m>>n;
    if(m == 0){
        cout<<"Point is on y-axis";
    }
    if(n == 0){
        cout<<"Point is on x-axis";
    }
    if(m ==0 && n == 0){
        cout<<"Point is origin";
    }
    cout<<endl;
    cout<<"8.";
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the coordinates of three points on a line: ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int area3 = (x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2));//30 + (-8) + 
    if(area3 == 0){
        cout<<"Points are collinear";
    }
    else{
        cout<<"Points are not collinear";
    }
    cout<<endl;
    cout<<"9.";
    char ch;
    cout<<"Enter the charachter: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Character is lowercase";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"Character is uppercase";
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"Character is a digit";
    }
    else{
        cout<<"Character is a special character";
    }
    
    return 0;
}