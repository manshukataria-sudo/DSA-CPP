#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue<int>&temp){
    stack<int> helper;
    while(temp.size()>0){
        helper.push(temp.front());
        temp.pop();
    }
    while(helper.size()>0){
        temp.push(helper.top());
        helper.pop();
    }
}
void display(queue<int> &temp){
    int n=temp.size();
    for(int i=0;i<n;i++){
        cout<<temp.front()<<" ";
        temp.push(temp.front());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    reverseQueue(q);
    display(q);


}