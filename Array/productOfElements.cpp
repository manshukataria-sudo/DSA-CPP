#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int product=1;
    for(int i=0;i<10;i++){
        product=product*a[i];
    }
    cout<<"Product of elements of array is : "<<product<<endl;
}