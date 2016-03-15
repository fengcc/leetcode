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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode *p = root, *pre = NULL;
        stack<TreeNode *> s;
        vector<int> result;
        
        while (p != NULL || !s.empty()) {
            if (p != NULL) {
                s.push(p);
                p = p->left;
            } else {
                p = s.top();
                if (pre != p->right) {
                    p = p->right;
                    pre = NULL;
                }
                else {
                    pre = s.top();
                    s.pop();
                    result.push_back(pre->val);
                    p = NULL;
                }
            }
        }
        return result;
    }
};
