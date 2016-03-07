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
    void recordPaths(TreeNode *t, vector<string> &ret, string path) {
        if (t == NULL)
            return;
        path += to_string(t->val);
        
        if (t->left == NULL && t->right == NULL)
            ret.push_back(path);
        else {
            path.append("->");
            recordPaths(t->left, ret, path);
            recordPaths(t->right, ret, path);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        string path;
        
        recordPaths(root, ret, path);
        
        return ret;
        
    }
};
