#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    //int*ptr=(int*)arr;
    //cout<<arr[1]+1<<"  "<<arr<<"  "<<&arr[1][1];
    // int *ptr1=(int*)arr;
    // int *ptr2=(int*)(arr+1);
    // cout<<*(ptr1+2)-*(ptr2);


    int sum=0;
    for(int(*ptr)[3]=arr;ptr<arr+2;ptr++){
        for(int *p=*ptr;p<*ptr+3;p++){
            sum+=*p;
        }
    }
    cout<<sum<<endl;
}