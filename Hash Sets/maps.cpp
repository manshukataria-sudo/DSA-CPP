#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // pair<int,int> p;
    // p.first = 100;
    // p.second = 10;
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    unordered_map<string, int> mp;
    pair<string, int> p1;
    p1.first = "A";
    p1.second = 1;
    pair<string, int> p2;
    p2.first = "B";
    p2.second = 2;
    pair<string, int> p3;
    p3.first = "C";
    p3.second = 3;
    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    // for(pair<string, int> ele : mp){
    //     cout<<ele.first<<" ";
    //     cout<<ele.second<<endl;
    // }
    // for(auto ele : mp){  // preferred to use auto 
    //     cout<<ele.first<<" ";
    //     cout<<ele.second<<endl;
    // }
    mp["chaman"] = 48;
    mp["sonu"] = 39;
    // mp["sonu"] = 39;
    for(auto ele : mp){
        cout<<ele.first<<" ";
        cout<<ele.second<<endl;
    }
    cout<<++mp["manshu"]<<endl;
    cout<<endl;
    mp.erase("chaman");
    mp.erase("A");
    for(auto ele : mp){
        cout<<ele.first<<" ";
        cout<<ele.second<<endl;
    }
    unordered_map<string,string> m;
    m["manshu"]= "A";
    m["kon"] = "A";
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}
