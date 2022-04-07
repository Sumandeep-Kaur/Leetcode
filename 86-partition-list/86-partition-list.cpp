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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallerHead = new ListNode();
        ListNode* smaller = smallerHead;
        ListNode* greaterHead = new ListNode();
        ListNode* greater = greaterHead;
        
        while(head != NULL) {
            if(head->val < x) {
                smaller->next = head;
                smaller = smaller->next;
            }
            else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        
        greater->next = NULL;
        smaller->next = greaterHead->next;
        
        return smallerHead->next;
    }
};