#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    int n=q.size();
    stack<int>helper;
    while(q.size()>0){
        helper.push(q.front());
        q.pop();
    }
    int x=n/2;
    for(int i=0;i<x;i++){
        q.push(helper.top());
        helper.pop();
    }
    int i=0;
    while(helper.size()>0){
        if(i%2==0){
            q.push(q.front());
            q.pop();
        }
        else{
            q.push(helper.top());
            helper.pop();
        }
        i++;
    }
    while(q.size()>0){
        helper.push(q.front());
        q.pop();
    }
    while(helper.size()>0){
        q.push(helper.top());
        helper.pop();
    }
    display(q);
}