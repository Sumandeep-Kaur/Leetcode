/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0)
            return head;
        
        int len = 1;
        ListNode* ptr = head;
        while(ptr->next != NULL) {
            len++;
            ptr = ptr->next;
        }
        
        k = k % len;
        if(k == len || k == 0)
            return head;
        
        ptr->next = head; 
        int end = len - k;
        while(end--)
            ptr = ptr->next;
        
        head = ptr->next;
        ptr->next = NULL;
        
        return head;
    }
};