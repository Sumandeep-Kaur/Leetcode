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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head->next == NULL)
            return head;
        
        ListNode *prev = NULL, *curr = head;
        ListNode *tail1, *tail2;
        
        while(left > 1) {
            prev = curr;
            curr = curr->next;
            left--;
            right--;
        }
        
        tail1 = prev;
        tail2 = curr;
        
        ListNode* next;
        while(right--) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        if(tail1 == NULL)
            head = prev;
        else
            tail1->next = prev;
        
        tail2->next = curr;
        return head;
    }
};