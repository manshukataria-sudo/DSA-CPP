#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(-100);
    pq.push(8);
    pq.push(0);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;   // max among the remaining elements attached at the top
    pq.pop();
    cout<<pq.top()<<endl;
}