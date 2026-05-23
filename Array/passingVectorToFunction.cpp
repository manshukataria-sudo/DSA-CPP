#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    a[0]=100;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> v;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    change(v);                      // pass by value takes place
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}