// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void display(queue<int> &q){
//     int n=q.size();
//     for(int i=0;i<n;i++){
//         cout<<q.front()<<" ";
//         q.push(q.front());
//         q.pop();
//     }
//     cout<<endl;
// }
// void reverse(queue<int> &q, int k){
//     int n=q.size();
//     stack<int> temp1;
//     stack<int> temp2;
//     for(int i=0;i<n;i++){
//         temp1.push(q.front());
//         q.pop();
//     }
//     for(int i=0;i<n-k;i++){
//         temp2.push(temp1.top());
//         temp1.pop();
//     }
//     while(temp1.size()>0){
//         q.push(temp1.top());
//         temp1.pop();
//     }
//     while(temp2.size()>0){
//         q.push(temp2.top());
//         temp2.pop();
//     }
// }
// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(8);
//     display(q);
//     reverse(q,7);
//     display(q);
// }


                    // better approach
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void reverse(queue<int> &q, int k){
    int n=q.size();
    stack<int> temp;
    for(int i=0;i<k;i++){
        temp.push(q.front());
        q.pop();
    }
    while(temp.size()>0){
        q.push(temp.top());
        temp.pop();
    }
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reverse(q,8);
    display(q);
}
