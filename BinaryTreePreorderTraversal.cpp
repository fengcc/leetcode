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
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        
        vector<int> r;
        stack<TreeNode *> s;
        TreeNode *x;
        
        s.push(root);
        while (!s.empty()) {
            x = s.top();
            s.pop();
            r.push_back(x->val);
            if (x->right != NULL)
                s.push(x->right);
            if (x->left != NULL)
                s.push(x->left);
        }
        return r;
    }
};