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
        if(head == NULL)
            return NULL;
        
        int len = 0;
        ListNode* ptr = head;
        while(ptr != NULL) {
            len++;
            ptr = ptr->next;
        }
        
        if(k > len)
            k = k % len;
        if(k == len || len == 1 || k == 0)
            return head;
        
        ListNode* newHead = head;
        ptr = head;
        for(int i = 1; i < len - k; i++) {
            newHead = newHead->next;
            ptr = ptr->next;
        }
        newHead = newHead->next;
        ptr->next = NULL;
        
        ptr = newHead;
        while(k != 1) {
            ptr = ptr->next;
            k--;
        }
        ptr->next = head;
        
        return newHead;
    }
};