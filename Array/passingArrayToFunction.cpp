#include<iostream>
using namespace std;
void display(int *a){                  //as address of array is recieved therefore a represents pointer
    for(int i=0;i<4;i++){               // int *a
        cout<<a[i]<<endl;
    }
    // int size=sizeof(a)/sizeof(int);     // a represemts pointer it doesn't works, it represents address 
    // cout<<size;
}

void change(int b[]){
    b[0]=100;
}

int main(){
    int arr[4]={1,2,3,4};           // arr actually stores address of first element
    int *p=arr;
    //cout<<p<<endl<<arr<<endl<<&arr<<endl;
    display(arr);                                // arr represents address of array
    change(arr);
    display(arr);

    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }


}