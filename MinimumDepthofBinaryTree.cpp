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
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        
        if (left != 0 && right != 0)
            return min(left, right) + 1;
        else
            return left == 0 ? right+1 : left+1;
    }
};