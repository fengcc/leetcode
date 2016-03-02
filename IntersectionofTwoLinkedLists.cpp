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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        
        for (ListNode *h = headA; h != NULL; h = h->next)
            ++lenA;
        for (ListNode *h = headB; h != NULL; h = h->next)
            ++lenB;
        
        int cut = lenA - lenB;
        if (cut > 0)
            for (; cut != 0; --cut) headA = headA->next;
        else if (cut < 0)
            for (; cut != 0; ++cut) headB = headB->next;
        
        while (headA != NULL) {
            if (headA == headB)
                break;
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};