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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode h(0);
        ListNode *slow = &h, *fast = head;
        slow->next = head;
        
        while (n-- > 1)
            fast = fast->next;
        
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *temp = slow->next;
        slow->next = temp->next;
        delete temp;
        
        return h.next;
            
    }
};