/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* n = node->next;
        
        int temp = n->val;
        n->val = node->val;
        node->val = temp;
        
        node->next = n->next;
        free(n);
    }
};