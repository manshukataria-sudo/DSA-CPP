#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> v(5);
    for(int i=0;i<5;i++){
        v[i]=arr[i];
    }


    for(int ele:v){                 // extracts each element from v via ele and printed
        cout<<ele<<" ";             
    }

}