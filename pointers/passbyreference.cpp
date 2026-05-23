// #include<iostream>
// using namespace std;
// void swap(int* a,int* b){
//     *a=*a+*b;
//     *b=*a-*b;
//     *a=*a-*b;
//     // return;

// }
// int main(){
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     swap(&a,&b);
//     cout<<"a = "<<a<<endl<<"b = "<<b;


// }


#include<iostream>
using namespace std;
void swap(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    // return;

}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int*x=&a;
    int*y=&b;
    swap(x,y);
    cout<<"a = "<<a<<endl<<"b = "<<b;


}