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
    bool isSymmetricHelp(TreeNode *left, TreeNode *right) {
        if (left == NULL || right == NULL)
            return left == right;
        if (left->val != right->val)
            return false;
        return isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSymmetricHelp(root->left, root->right);
    }
};