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
    int depth(TreeNode *t) {
        if (t == NULL) return 0;
        int left = depth(t->left);
        int right = depth(t->right);
        if (left >= 0 && right >= 0 && abs(left - right) < 2)
            return max(left, right) + 1;
        else
            return -1;
    }
public:
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
};