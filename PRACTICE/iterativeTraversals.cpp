#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void pre(Node *root){
    stack<Node*>st;
    st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL){
            st.push(temp->right);
        }
        if(temp->left!=NULL){
            st.push(temp->left);
        }
    }
}
void post(Node *root){
    stack<Node*>st;
    stack<int>helper;
    st.push(root);
    while(st.size()>0){
        Node *temp=st.top();
        st.pop();
        helper.push(temp->val);
        if(temp->left!=NULL){
            st.push(temp->left);
        }
        if(temp->right){
            st.push(temp->right);
        }
    }
    while(helper.size()>0){
        cout<<helper.top()<<" ";
        helper.pop();
    }
}
void in(Node* root){
    stack<Node*>st;
    st.push(root);
    while(st.size()>0){
        while(st.top()->left!=NULL){
            st.push(st.top()->left);
        }
        while(st.size()>0 && st.top()->right==NULL){
            cout<<st.top()->val<<" ";
            st.pop();
        }
        if(st.size()>0 && st.top()->right!=NULL){
            cout<<st.top()->val<<" ";
            Node* temp=st.top();
            st.pop();
            st.push(temp->right);
        }
    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    pre(a);
    cout<<endl;
    post(a);
    cout<<endl;
    in(a);
}