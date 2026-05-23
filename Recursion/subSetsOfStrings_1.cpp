#include <iostream>
#include <string>
#include<vector>
using namespace std;
// void subsets(string str,string sub,int i){
//     if(i==str.size()){
//         cout<<sub<<endl;
//         return;
//     }
//     subsets(str,sub+str[i],i+1);
//     subsets(str,sub,i+1);
// }
vector<string> subSets(string str,string sub,vector<string>&ans,int i){
    if(i==str.size()){
        ans.push_back(sub);
        return ans;
    }
    subSets(str,sub+str[i],ans,i+1);
    subSets(str,sub,ans,i+1);
    return ans;
}
int main(){
    string str = "abc";
    // subsets(str,"",0);
    vector<string> ans;
    vector<string>powSet=subSets(str,"",ans,0);
    for(string ele :powSet){
        cout<<ele<<endl;
    }
}