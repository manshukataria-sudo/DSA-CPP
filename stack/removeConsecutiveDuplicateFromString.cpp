// #include<iostream>
// #include<stack>
// using namespace std;
// string removeDup(string &str){
//     if(str.size()==0 || str.size()==1) return str;
//     int j=0;
//     int i;
//     for(i=1;str[i]!='\0';i++){
//         if(str[i]!=str[j]){
//             j++;
//             str[j]=str[i];
//         }
//     }
//     str.erase(++j);
//     return str;
// }
// int main(){
//     string str;
//     cout<<"Enter a string : ";
//     getline(cin,str);
//     cout<<removeDup(str)<<endl;
//     cout<<str.size()<<endl;
// }

// using stacks 

#include<iostream>
#include<stack>
#include <algorithm>
using namespace std;
string removeDup(string str){
    if(str.size()==0 || str.size()==1) return str;
    stack<char>st;
    st.push(str[0]);
    for(int i=1;str[i]!='\0';i++){
        if(str[i]!=st.top()) st.push(str[i]);
    }
    str.erase(0);
    while(st.size()>0){
        str.push_back(st.top());
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
}
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<removeDup(str)<<endl;
}

