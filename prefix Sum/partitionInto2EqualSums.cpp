#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    vector<int>sum(size);
    sum[0]=arr[0];
    for(int i=1;i<sum.size();i++){
        sum[i]=sum[i-1]+arr[i];
    }
    for(int ele:sum) cout<<ele<<" ";
    bool f=0;
    for(int i=0;i<sum.size();i++){
        if(2*sum[i]==sum[sum.size()]){
            cout<<endl<<"Aan meri jaan "<<endl<<i<<endl;
            break;}
    }
    if(f==0) cout<<endl<<".....Not Possible......"<<endl;

}