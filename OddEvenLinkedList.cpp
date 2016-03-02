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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) return head;
        
        ListNode *even = head->next;
        ListNode *a = head, *b = even;
        
        while (b != NULL && b->next != NULL) {
            a->next = b->next;
            a = a->next;
            
            b->next = a->next;
            b = b->next;
        }
        a->next = even;
        return head;
        
    }
};