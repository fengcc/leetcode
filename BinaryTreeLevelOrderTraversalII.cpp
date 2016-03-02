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
private:
    void levelOrder(TreeNode *t, int level, vector<vector<int> > &result) {
        if (t == NULL) return;
        
        if (level == result.size())
            result.push_back(vector<int> {});
        
        result[level].push_back(t->val);
        
        levelOrder(t->left, level+1, result);
        levelOrder(t->right, level+1, result);
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > result;
        levelOrder(root, 0, result);
        
        return vector<vector<int> > (result.rbegin(), result.rend());
    }
};