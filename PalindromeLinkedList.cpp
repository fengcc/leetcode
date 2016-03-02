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
    bool isPalindrome(ListNode* head) {
        ListNode *reverse = NULL, *slow = head, *fast = head;
        bool flag = true;
        
        //寻找中间结点，同时将前半部分逆置
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            ListNode *temp = slow;
            slow = slow->next;
            temp->next = reverse;
            reverse = temp;
        }
        head = slow; //保存后半部分的头，方便后来恢复链表
        
        //结点个数为奇数个，跳过中间结点
        if (fast != NULL && fast->next == NULL)
            slow = slow->next;
        
        while (slow != NULL) {
            if (reverse->val != slow->val) {
                flag = false;
                break;   
            }
            ListNode *temp = reverse;
            reverse = reverse->next;
            temp->next = head;
            head = temp;
            
            slow = slow->next;
        }
        
        //不是回文的，恢复剩余结点
        while (reverse != NULL) {
            ListNode *temp = reverse;
            reverse = reverse->next;
            temp->next = head;
            head = temp;
        }
        
        return flag;
    }
};
