#include<iostream>
using namespace std;
int main(){
    int a[3][2]={1,2,3,4,5,6};
    int b[3][2]={6,5,4,3,2,1};
    int c[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}