#include<iostream>
using namespace std;
struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        if(head->next->next==NULL) head->next=NULL; return head;
        ListNode *slow=head;
        ListNode *fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
void display(ListNode *a){
    ListNode *temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    ListNode *a=new ListNode(10);
    ListNode *b=new ListNode(20);
    ListNode *c=new ListNode(30);
    ListNode *d=new ListNode(40);
    ListNode *e=new ListNode(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    display(deleteMiddle(a));

}