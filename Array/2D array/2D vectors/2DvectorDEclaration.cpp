#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(3,2);
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    vector<vector<int>> v(3,vector<int>(5,2));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;


}