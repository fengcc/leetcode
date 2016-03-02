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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (NULL == root) return {};
        
        vector<vector<int>> result;
        vector<int> level;
        queue<TreeNode *> q;
        TreeNode *tail;
        
        q.push(root);
        tail = root;
        while (!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();
            level.push_back(temp->val);
            
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
            if (temp == tail) {
                result.push_back(level);
                level.clear();
                tail = q.back();
            }
        }
        return result;
    }
};