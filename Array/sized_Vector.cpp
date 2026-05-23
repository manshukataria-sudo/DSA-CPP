#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<v.size()<<endl;             // size =5;
    cout<<v.capacity()<<endl;         // capacity=5;
    //v[0]=100;                        // and elements can be stored as like array
    //cout<<v[0]<<endl;
    //cout<<v.size()<<"  "<<v.capacity()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    vector<int> m(5,7);         // vactor is made of size 5 and 7 is stored in every box;
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" ";
    }
    


}