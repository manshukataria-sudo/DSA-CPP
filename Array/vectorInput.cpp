#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5);
    // for(int i=0;i<5;i++){           // if size is given;
    //     cin>>v[i];
    // }

    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }

    vector<int> a;
    for(int i=0;i<5;i++){           // i < no.of elements you want ot store
        int n;
        cin>>n;
        a.push_back(n);
    }
    cout<<a.size()<<" "<<a.capacity()<<endl;

}