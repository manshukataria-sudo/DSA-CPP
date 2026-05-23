#include<iostream>
#include<vector>
using namespace std;
class Queue{
private:
    vector<int> queue;
public:
    void display(){
        int n=queue.size();
        if(n==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=0;i<n;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    void push(int val){
        queue.push_back(val);
    }
    int size(){
        return queue.size();
    }
    int empty(){
        if(queue.size()==0) return 1;
        return 0;
    }
    int front(){
        return queue[0];
    }
    int back(){
        return queue[queue.size()-1];
    }
    void pop(){
        queue.erase(queue.begin());
    }
};
int main(){
    Queue q;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.push(10);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.display();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

}

// #include<iostream>
// #include<vector>
// using namespace std;
// class Queue{
// private:
//     int *arr;
//     int f=0;
//     int b=0;
//     int n;
// public:
//     Queue(int size){
//         this->n=size;
//         arr=new int[size];
//     }
//     int size(){
//         return b-f;
//     }
//     void push(int val){
//         if(b==n){
//             cout<<"Queue is full"<<endl;
//             return;
//         }
//         arr[b]=val;
//         b++;
//     }
//     void pop(){
//         if(b-f==0){
//             cout<<"Queue is already empty"<<endl;
//             return;
//         }
//         f++;
//     }
//     int front(){
//         if(b-f==0){
//             cout<<"Queue is already empty"<<endl;
//             return -1;
//         }
//         return arr[f];
//     }
//     bool empty(){
//         if(b-f==0) return true;
//         return false;
//     }
//     void display(){
//         if(b-f==0){
//             cout<<"Queue is already empty"<<endl;
//             return;
//         }
//         int i=f;
//         while(i<b){
//             cout<<arr[i]<<" ";
//             i++;
//         }
//         cout<<endl;
//     }
//     int back(){
//         if(b-f==0){
//             cout<<"Queue is already empty"<<endl;
//             return -1;
//         }
//         return arr[b-1];
//     }
// };
// int main(){
//     Queue q(8);
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;
//     q.push(10);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     q.push(20);
//     q.push(20);
//     q.push(20);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.display();
//     q.push(50);
//     q.push(60);
//     q.display();
//     q.pop();
//     q.display();
//     cout<<q.size()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;

// }