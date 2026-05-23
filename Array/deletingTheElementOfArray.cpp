#include<iostream>
using namespace std;
void showArray(int arr[],int &size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void deleteElement(int arr[],int idx,int &size){
    if(idx>=size || idx<0) cout<<"INVALID INDEX"<<endl;
    else {
        for(int i=idx;i<size;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
}
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the "<<size<<" elemnts : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int idx;
    cout<<"Enter the index to delete : ";
    cin>>idx;
    deleteElement(arr,idx,size);
    showArray(arr,size);
    cout<<endl<<"You new size is : "<<size<<endl;

}