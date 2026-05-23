#include <iostream>
#include <stack>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
void postOrder(Node* root) {
    stack<Node*> st;
    stack<int> helper;
    st.push(root);
    while (st.size() > 0) {
        Node* temp = st.top();
        st.pop();
        helper.push(temp->val);
        if (temp->left)
            st.push(temp->left);
        if (temp->right)
            st.push(temp->right);
    }
    while (helper.size() > 0) {
        cout << helper.top() << " ";
        helper.pop();
    }
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    postOrder(a);
}
