#include<iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int length,int breadth){
    return length*breadth;
}
int main(){
    int l,b,s;
    cout<<"Enter the side of square : ";
    cin>>s;
    cout<<"Enter the length of rectangle : ";
    cin>>l;
    cout<<"Enter the breadth of rectangle : ";
    cin>>b;
    cout<<"Area of the square is : "<<area(s)<<endl;
    cout<<"Area of the rectangle is : "<<area(l,b)<<endl;;
}