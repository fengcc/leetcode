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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *pre = NULL, *p = head;
        while (p != NULL) {
            ListNode *temp;
            if (p->val == val) {
                temp = p;
                p = p->next;
                if (pre == NULL)
                    head = p;
                else {
                    pre->next = p;
                }
                free(temp);
            } else {
                pre = p;
                p = p->next;
            }
        }
        return head;
    }
};
