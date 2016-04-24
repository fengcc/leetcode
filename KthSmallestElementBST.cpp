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
    int inorder(TreeNode *r, int &k) {
        if (r == NULL) return 0;
        
        int x = inorder(r->left, k);
        if (k == 0)
            return x;
        else if (--k == 0)
            return r->val;
        else
            return inorder(r->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        return inorder(root, k);
    }
};
