class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root)
            return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (st.size()) {
            while (st.top()->left != NULL) {
                st.push(st.top()->left);
            }
            while (st.size() && st.top()->right == NULL) {
                ans.push_back(st.top()->val);
                st.pop();
            }
            if (st.size() && st.top()->right) {
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                st.push(temp->right);
            }
        }
        return ans;
    }
};