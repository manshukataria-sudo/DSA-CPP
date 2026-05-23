#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        string common;
        for(int j=0;j<strs[0].size();j++){
            int count=1;
            int i=1;
            while(i<strs.size()){
                if(strs[i][j]==strs[i-1][j]){count++;}
                else {break;}
                i++;
            }
            if(count==strs.size()){
                common.push_back(strs[i][j]);
            }
        }
        return common;
    }
int main(){
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("fly");
    strs.push_back("flight");
    strs.push_back("flow");
    cout<<longestCommonPrefix(strs)<<endl;



}