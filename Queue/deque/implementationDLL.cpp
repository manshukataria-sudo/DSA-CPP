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
    ListNode *head=NULL;
    ListNode *tail=NULL;
    int n=0;
public:
    void addFront(int val){
        ListNode *temp=new ListNode(val);
        if(n==0){
            head=tail=temp;
            n++;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=head->prev;
        n++;
    }
    void addBack(int val){
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
    void popFront(){
        if(n==0){
            cout<<"Deque is already empty"<<endl;
            return;
        }
        ListNode *temp=head;
        head=head->next;
        head->prev=NULL;
        n--;
        delete(temp);
    }
    void popBack(){
        if(n==0){
            cout<<"Deque is already empty"<<endl;
            return;
        }
        ListNode *temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete(temp);
        n--;
    }
    int size(){
        return this->n;
    }
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
};
int main(){
    Deque dq;
    dq.popBack();
    dq.popFront();
    dq.display();
    cout<<dq.size()<<endl;
    dq.addFront(10);
    dq.addFront(9);
    dq.addFront(8);
    dq.addFront(7);
    dq.addFront(6);
    dq.addFront(5);
    dq.display();
    dq.popFront();
    dq.popFront();
    dq.popFront();
    dq.display();
    dq.addBack(11);
    dq.addBack(12);
    dq.addBack(13);
    dq.addBack(14);
    dq.addBack(15);
    dq.display();
    dq.popBack();
    dq.display();
    cout<<dq.size()<<endl;

} 