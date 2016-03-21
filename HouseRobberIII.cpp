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
    int* robSub(TreeNode *t)
    {
        if (t == NULL) return new int[2]();
        
        int *left = robSub(t->left);
        int *right = robSub(t->right);
        int *val = new int[2];
        val[0] = max(left[0], left[1]) + max(right[0], right[1]); //如果当前结点没有抢
        val[1] = t->val + left[0] + right[0]; //如果当前结点抢了
        delete[] left;
        delete[] right;
        return val;
    }
    int rob(TreeNode* root) {
        int *val = robSub(root);
        return max(val[0], val[1]);
    }
};
