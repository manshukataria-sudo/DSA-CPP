#include<iostream>
#include<vector>
using namespace std;
// brute force
// int countInversions(vector<int>&a){
//     int count=0;
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             if(a[j]<a[i]) count++;
//         }
//     }
//     return count;
// }
// optimized

int inversion(vector<int>&p,vector<int>&q){
    int count=0;
    int i=0,j=0; 
    while(i<p.size() && j<q.size()){
        if(p[i]>q[j]){count+=(p.size()-i);j++;}
        else if(p[i]<q[j]) i++;
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else{res[k++]=b[j++];}
    }
    if(i==a.size()) while(j<b.size()) res[k++]=b[j++];
    else while(i<a.size()) res[k++]=a[i++];
}                                            
int mergeSort(vector<int>&a){
    int count=0;
    if(a.size()==1) return 0;
    vector<int>p;
    vector<int>q;
    for(int i=0;i<a.size();i++){
        if(i<a.size()/2)p.push_back(a[i]);
        else q.push_back(a[i]);
    }
    count+=mergeSort(p);
    count+=mergeSort(q);
    count+=inversion(p,q);
    merge(p,q,a);
    p.clear();
    q.clear();
    return count;
}
int main(){
    int arr[]={9,8,7,6,1,0};
    int n1=sizeof(arr)/sizeof(int);
    vector<int>a(arr,arr+n1);
    for(int ele:a) cout<<ele<<" ";
    //cout<<endl<<countInversions(a);
    cout<<endl;
    for(int ele:a) cout<<ele<<" ";
    cout<<endl<<mergeSort(a)<<endl;

}