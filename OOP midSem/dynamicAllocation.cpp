#include<iostream>
using namespace std;
int main(){
    // int *arr=new int(3);
    // cout<<arr[0]<<endl;
    // for(int i=1;i<5;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<(arr+1)<<endl;
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=13;
    cout<<arr<<endl;
    //cout<<*arr<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    
}
