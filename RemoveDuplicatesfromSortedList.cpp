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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        
        ListNode *h = head;
        while (h->next != NULL) {
            if (h->val == h->next->val) {
                ListNode *tmp = h->next;
                h->next = tmp->next;
                delete tmp;
            } else
                h = h->next;
        }
        return head;
    }
};