#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    stringstream ss(str);
    vector<string> words;
    string temp;
    while(ss>>temp){
        words.push_back(temp);
    }
    sort(words.begin(),words.end());
    int count=1;
    int max=1;
    for(int i=1;i<words.size();i++){
        if(words[i]==words[i-1]) count++;
        else if (max<count) {
            max=count; count=1;
        }
    }

    count=1;
    for(int i=1;i<words.size();i++){
        if(words[i]==words[i-1]) {
            count++;
        }
        else if(count==max){
            cout<<words[i]<<" "<<max<<endl;
            count=1;
        }
    }
}