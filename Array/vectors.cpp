#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;          
    v.push_back(1);               // while inserting do not use []
    v.push_back(2);
    v.push_back(3);
    v[3]=4;
    //v[4]=56;
    v.push_back(6);


    v[0]=100;
    for(int i=0;i<5;i++){         // for updation and accessing we can use[]
        cout<<v[i]<<" ";
    }


}