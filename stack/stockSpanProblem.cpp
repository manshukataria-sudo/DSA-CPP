// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// vector<int> span(vector<int>&shares){
//     int n=shares.size();
//     vector<int>days(n,1);
//     if(n==1) return days;
//     stack<int>temp;
//     temp.push(shares[0]);
//     for(int i=1;i<n;i++){
//         if(temp.top()>shares[i]) days[i]=1;
//         else{
//             int j=1;
//             int daysIdx;
//             while(temp.size()>0 && temp.top()<=shares[i]){
//                 daysIdx=i-j;
//                 j+=days[daysIdx];
//                 temp.pop();
//             }
//             days[i]=j;
//         }
//         temp.push(shares[i]);
//     }
//     return days;
// }
// int main(){
//     vector<int>shares={100,80,61,60,70,60,75,85};
//     vector<int>days=span(shares);
//     for(int ele:days){
//         cout<<ele<<" ";
//     }
// }

//using previous greater element

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> span(vector<int>&shares){
    int n=shares.size();
    vector<int>days(n,1);
    if(n==1) return days;
    stack<int>temp;
    temp.push(0);
    for(int i=1;i<n;i++){
        while(temp.size()>0 && shares[temp.top()]<=shares[i]){
            temp.pop();
        }
        if(temp.size()==0) days[i]=i+1;
        else days[i]=i-temp.top();
        temp.push(i);
    }
    return days;
}
int main(){
    vector<int>shares={100,80,60,81,70,60,75,850};
    vector<int>days=span(shares);
    for(int ele:days){
        cout<<ele<<" ";
    }
}//