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
    ListNode* reverseList(ListNode* head) {
        ListNode *h = NULL, *x = head;
        while (x != NULL) {
            ListNode *t = x;
            x = x->next;
            t->next = h;
            h = t;
        }
        return h;
    }
};