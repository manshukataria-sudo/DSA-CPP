#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // string str;
    // cout<<"Enter a string : ";
    // getline(cin,str);
    // char maxChar='\0';
    // int max=INT_MIN;
    // int count=1;
    // sort(a.begin(),a.end());
    // for(int i=1;i<a.size();i++){
    //     if(a[i]==a[i-1]){
    //         count++;
    //     }
    //     if(max<count){
    //         max=count;
    //         maxChar=a[i];
    //     }
    // }
    // cout<<maxChar<<endl;

    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    vector<int>arr(26,0);
    for(int i=0;i<str.size();i++){
        arr[((int)str[i])-97]++;
    }
    int max=arr[0];
    int i=0;
    int k=0;
    while(i<26){
        if(max<arr[i]){
            max=arr[i];
            k=i;
        }
        i++;
    }
    cout<<(char)(k+97)<<endl;

} 