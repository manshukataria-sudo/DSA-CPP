#include<iostream>
#include<deque>
using namespace std;
void display(deque<int> &dq){
    int n=dq.size();
    for(int i=0;i<n;i++){
        cout<<dq.front()<<" ";
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    display(dq);
    dq.pop_front();
    display(dq);
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    display(dq);
    dq.pop_back();
    dq.pop_front();

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    cout<<dq.size()<<endl;
}