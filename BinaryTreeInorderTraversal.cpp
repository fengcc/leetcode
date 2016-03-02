/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        
        vector<int> r;
        stack<TreeNode *> s;
        TreeNode *x = root;
        
        while (x != NULL || !s.empty()) {
            if (x != NULL) {
                s.push(x);
                x = x->left;
            } else {
                x = s.top();
                s.pop();
                r.push_back(x->val);
                x = x->right;
            }
        }
        return r;
    }
};