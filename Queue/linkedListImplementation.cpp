#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode *next=NULL;
    ListNode(){}
    ListNode(int val){
        this->val=val;
    }
    ListNode(int val,ListNode *temp){
        this->next=temp;
        this->val=val;
    }
    ListNode(ListNode *temp){
        this->next=temp;
    }
};
class Queue{
private:
    ListNode *head=NULL;
    ListNode *tail=NULL;
    int n=0;
public:
    void push(int val){
        ListNode *temp=new ListNode(val,NULL);
        if(n==0){  
            tail=head=temp;
            n++;
            return;
        }
        tail->next=temp;
        tail=tail->next;
        n++;
    }
    int size(){
        return n;
    }
    void pop(){
        if(n==0){
            cout<<"Queue is already empty"<<endl;
            return;
        }
        ListNode *temp=head;
        head=head->next;
        delete(temp);
        n--;
    }
    int front(){
        if(n==0){
            cout<<"Queue is already empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(n==0){
            cout<<"Queue is already empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        if(n==0){
            cout<<"Queue is already Empty"<<endl;
            return;
        }
        ListNode *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool empty(){
        if(n==0) return 1;
        return 0;
    }
};
int main(){
    Queue q;
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.push(10);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(20);
    q.push(20);
    q.push(20);
    q.pop();
    q.pop();
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
}