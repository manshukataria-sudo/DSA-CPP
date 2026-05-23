#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    cout<<sizeof(ptr)<<endl;
    //int *ptr=&arr;              // not correct
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;
    int *m=ptr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    for(int i=0;i<5;i++){           // ptr[i]  represents the array element
        cout<<m[i]<<" ";
    }
    
}