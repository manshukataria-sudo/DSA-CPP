#include<iostream>
using namespace std;
int main(){
    int arr[3][2]={1,2,3,400,5,6};
    int max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max<<endl;

}