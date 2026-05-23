#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
void leafNodes(Node* root) {
    cout << endl;
    stack<Node*> st;
    st.push(root);
    while (st.size()) {
        Node* temp = st.top();
        st.pop();
        if (temp->right) {
            st.push(temp->right);
        }
        if (temp->left) {
            st.push(temp->left);
        }
        if (temp->left == NULL && temp->right == NULL) {
            cout << temp->val << " ";
        }
    }
    cout << endl;
}
void leftBoundary(Node* root) {
    // Node *temp=root;
    // while(temp->left!=NULL || temp->right!=NULL){
    //     while(temp->left!=NULL){
    //         cout<<temp->val<<" ";
    //         temp=temp->left;
    //     }
    //     if(temp->right!=NULL){
    //         cout<<temp->val<<" ";
    //         temp=temp->right;
    //     }
    // }
    // cout<<endl;
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        return;
    }
    cout << root->val << " ";
    leftBoundary(root->left);
    if (root->left == NULL) {
        leftBoundary(root->right);
    }
}
void rightBoundary(Node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        return;
    }
    rightBoundary(root->right);
    if (root->right == NULL) {
        rightBoundary(root->left);
    }
    cout << root->val << " ";
}
void boundary(Node* root) {
    leftBoundary(root);
    leafNodes(root);
    rightBoundary(root->right);
}
Node* construct(vector<int>& lvlTraversal) {
    Node* root = new Node(lvlTraversal[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1, n = lvlTraversal.size();
    while (i < n) {
        Node* temp = q.front();
        q.pop();
        if (i < n && lvlTraversal[i] != -1) {
            temp->left = new Node(lvlTraversal[i]);
        }
        i++;
        if (i < n && lvlTraversal[i] != -1) {
            temp->right = new Node(lvlTraversal[i]);
        }
        i++;
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
    return root;
}
void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);
    while (q.size()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
}
int main() {
    vector<int> lvlTraversal = {1,  2,  3,  4,  5,  -1, 6,  7,  -1, 8,  -1, 9,  10, -1, 11, -1,
                                12, -1, 13, -1, 14, 15, 16, -1, 17, -1, -1, 18, -1, 19, -1, -1,
                                -1, 20, 21, 22, 23, -1, 24, 25, 26, 27, -1, -1, 28, -1, -1};
    Node* root = construct(lvlTraversal);
    levelOrder(root);
    cout << endl;
    boundary(root);
}
