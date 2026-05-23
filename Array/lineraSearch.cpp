#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"Enter the Size of array : ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int n;
    cout<<"Enter the element you want to search : ";
    cin>>n;
    bool flag=0;
    for(int i=0;i<size;i++){
        if(a[i]==n) {
            flag=1;
            cout<<"FOUND FOUND! "<<n<<" at index "<<i<<endl;
            break;
        }
    }
    if(flag==0) cout<<"ERROR 404 ! NOT FOUND"<<endl;
}