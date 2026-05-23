#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* construct(vector<int>& levelOrder) {
    queue<Node*> q;
    Node* root = new Node(levelOrder[0]);
    q.push(root);
    int i = 1;
    int n = levelOrder.size();
    while (i < n) {
        Node* temp = q.front();
        q.pop();
        if (levelOrder[i] != -1) {
            temp->left = new Node(levelOrder[i]);
        }
        i++;
        if (i < n && levelOrder[i] != -1) {
            temp->right = new Node(levelOrder[i]);
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
void display(Node* root) {
    queue<Node*> q;
    q.push(root);
    while (q.size()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->val << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
        cout << endl;
    }
    cout << endl;
}
// vector<int> left(Node* root) {
//     queue<Node*> q;
//     q.push(root);
//     vector<int> ans;
//     while (q.size()) {
//         int n = q.size();
//         for (int i = 0; i < n; i++) {
//             Node* temp = q.front();
//             q.pop();
//             if (i == 0) {
//                 ans.push_back(temp->val);
//             }
//             if (temp->left) {
//                 q.push(temp->left);
//             }
//             if (temp->right) {
//                 q.push(temp->right);
//             }
//         }
//     }
//     return ans;
// }
int level(Node* root) {
    if (!root) {
        return 0;
    }
    return 1 + max(level(root->right), level(root->left));
}
void left(Node* root, vector<int>& ans, int currLevel) {
    if (root == NULL) {
        return;
    }
    // ans[currLevel - 1] = root->val;
    left(root->right, ans, currLevel + 1);
    // ans[currLevel - 1] = root->val;
    left(root->left, ans, currLevel + 1);
    ans[currLevel - 1] = root->val;
}
int main() {
    vector<int> lvlTraversal = {1,  2,  3,  4,  5,  -1, 6,  7,  -1, 8,  -1, 9,  10, -1, 11, -1,
                                12, -1, 13, -1, 14, 15, 16, -1, 17, -1, -1, 18, -1, 19, -1, -1,
                                -1, 20, 21, 22, 23, -1, 24, 25, 26, 27, -1, -1, 28, -1, -1};
    Node* root = construct(lvlTraversal);
    display(root);
    vector<int> ans(level(root));
    left(root, ans, 1);
    for (int ele : ans) {
        cout << ele << " ";
    }
    cout << endl;
}