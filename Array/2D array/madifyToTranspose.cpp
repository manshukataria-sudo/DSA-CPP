#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square matrix : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int row=0;
    int col=0;
    for(int i=row;i<n;i++){
        for(int j=col;j<n;j++){
            if(i!=j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        row++;
        col++;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}