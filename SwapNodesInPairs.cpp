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
    ListNode* swapPairs(ListNode* head) {
        ListNode h(0), *pre = &h, *p = head, *pnext = NULL;
        h.next = head;
        while (p != NULL && p->next != NULL) {
            pnext = p->next;
            p->next = pnext->next;
            pre->next = pnext;
            pnext->next = p;
            
            pre = pre->next->next;
            p = pre->next;
        }
        return h.next;
    }
};
