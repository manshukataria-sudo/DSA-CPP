#include<iostream>
#include<queue>
using namespace std;
void removeEvenIndexed(queue<int> &temp){
    int n=temp.size();
    for(int i=0;i<n;i++){
        if(i%2!=0) temp.push(temp.front());
        temp.pop();
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
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    display(q);
    removeEvenIndexed(q);
    display(q);

}