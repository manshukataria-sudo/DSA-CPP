#include <iostream>
#include <queue>
// #include <deque>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
Node* construct(vector<int>& levelOrder) {
    queue<Node*> q;
    Node* root = new Node(levelOrder[0]);
    q.push(root);
    int i = 1;
    while (i < levelOrder.size()) {
        Node* temp = q.front();
        q.pop();
        if (levelOrder[i] != -1) {
            temp->left = new Node(levelOrder[i]);
        }
        i++;
        if (i < levelOrder.size()) {
            if (levelOrder[i] != -1) {
                temp->right = new Node(levelOrder[i]);
            }
            i++;
        }
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
    return root;
}
void preOrder(Node* root) {
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void left(Node* root) {
    if (root == NULL) {
        return;
    }
    left(root->left);
    cout << root->val << " ";
}
void right(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    right(root->right);
}
void topView(Node* root) {
    if (root == NULL) {
        return;
    }
    left(root);
    right(root->right);
}
// using hashmap and level order traversal
void topViewMap(Node* root, unordered_map<int, int>& mp, int verticalLevel, int& maxVerticalLevel,
                int& minVerticalLevel, int currLevel, int target) {
    if (root == NULL) {
        return;
    }
    maxVerticalLevel = max(verticalLevel, maxVerticalLevel);
    minVerticalLevel = min(verticalLevel, minVerticalLevel);
    if (currLevel == target && mp.find(verticalLevel) == mp.end()) {
        mp[verticalLevel] = root->val;
    }
    topViewMap(root->left, mp, verticalLevel - 1, maxVerticalLevel, minVerticalLevel, currLevel + 1,
               target);
    topViewMap(root->right, mp, verticalLevel + 1, maxVerticalLevel, minVerticalLevel,
               currLevel + 1, target);
}
int level(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + max(level(root->left), level(root->right));
}
void topViewLinear(Node* root) {
    unordered_map<int, int> mp;  // vertical level, node->val;
    queue<pair<Node*, int>> q;
    pair<Node*, int> p;
    p.first = root;
    p.second = 0;
    q.push(p);
    while (q.size()) {
        pair<Node*, int> temp = q.front();
        q.pop();
        if (mp.find(temp.second) == mp.end()) {
            mp[temp.second] = temp.first->val;
        }
        if (temp.first->left) {
            pair<Node*, int> helper;
            helper.first = temp.first->left;
            helper.second = temp.second - 1;
            q.push(helper);
        }
        if (temp.first->right) {
            pair<Node*, int> helper;
            helper.first = temp.first->right;
            helper.second = temp.second + 1;
            q.push(helper);
        }
    }
    cout << endl;
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for (auto ele : mp) {
        minLevel = min(minLevel, ele.first);
        maxLevel = max(maxLevel, ele.first);
    }
    int i = minLevel;
    while (i <= maxLevel) {
        cout << mp[i] << " ";
        i++;
    }
}
int main() {
    vector<int> levelOrder = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, -1, -1};
    Node* root = construct(levelOrder);
    // preOrder(root);
    topView(root);
    cout << endl;
    unordered_map<int, int> mp;
    int maxLevel = level(root);
    int maxVerticalLevel = INT_MIN;
    int minVerticalLevel = INT_MAX;
    for (int i = 0; i < maxLevel; i++) {
        topViewMap(root, mp, 0, maxVerticalLevel, minVerticalLevel, 0, i);
    }
    for (int i = minVerticalLevel; i <= maxVerticalLevel; i++) {
        cout << mp[i] << " ";
    }
    topViewLinear(root);
}
