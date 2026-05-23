#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
        if(smax<a[i] && a[i]<max) smax=a[i];
    }

    cout<<max<<" "<<smax<<endl;

}