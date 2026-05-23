// #include<iostream>
// using namespace std;
// class ListNode{
// public:
//     int val;
//     ListNode *next=NULL;
//     ListNode(int val){
//         this->val=val;
//     }
// };
// class Queue{
// private:
//     ListNode *head=NULL;
//     ListNode *tail=NULL;
//     int n=0;
// public:
//     void push(int val){
//         ListNode *temp=new ListNode(val);
//         if(n==0){
//             head=tail=temp;
//             n++;
//             return;
//         }
//         tail->next=temp;
//         tail=tail->next;
//         n++;
//     }
//     void pop(){
//         if(n==0){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         ListNode *temp=head;
//         head=head->next;
//         n--;
//         delete(temp);
//     }
//     int front(){
//         if(n==0){
//             cout<<"Queue is empty ";
//             return -1;
//         }
//         return head->val;
//     }
//     int back(){
//         if(n==0){
//             cout<<"Queue is empty ";
//             return -1;
//         }
//         return tail->val;
//     }
//     int size(){
//         return this->n;
//     }
//     bool empty(){
//         if (n==0) return 1;
//         return 0;
//     }
//     void display(){
//         if(n==0){
//             cout<<"Queue is empty"<<endl;
//             return;
//         }
//         ListNode *temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// };
// int main(){
//     Queue q;
//     q.pop();
//     q.display();
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;
//     q.push(10);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     q.push(20);
//     q.push(20);
//     q.push(20);
//     q.pop();
//     q.pop();
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


#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode *next=NULL;
    ListNode *prev=NULL;
    ListNode(int val){
        this->val=val;
    }
};
class Deque{
private:
    ListNode *head=NULL;
    ListNode *tail=NULL;
    int n=0;
public:
    void display(){
        if(n==0){
            cout<<"Deque is empty"<<endl;
            return;
        }
        ListNode *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void push_back(int val){
        ListNode *temp=new ListNode(val);
        if(n==0){
            head=tail=temp;
            n++;
            return;
        }
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
        n++;
    }
    void push_front(int val){
        ListNode *temp=new ListNode(val);
        if(n==0){
            head=tail=temp;
            n++;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        n++;
    }
    void pop_front(){
        if(n==0){
            cout<<"Deque is empty"<<endl;
            return;
        }
        ListNode *temp=head;
        head=head->next;
        n--;
        delete(temp);
    }
    void pop_back(){
        if(n==0){
            cout<<"Deque is empty"<<endl;
            return;
        }
        ListNode *temp=tail;
        tail=tail->prev;
        n--;
        delete(temp);
    }
    int size(){
        return this->n;
    }
    int front(){
        if(n==0){
            cout<<"Deque is empty ";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(n==0){
            cout<<"Deque is empty ";
            return -1;
        }
        return tail->val;
    }
};
int main(){
    Deque dq;
    
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.display();
    dq.pop_front();
    dq.display();
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.display();
    dq.pop_back();
    dq.pop_front();

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
}
