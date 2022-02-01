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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* ptr = head;
        
        int carry = 0;
        while(l1 && l2) {
            int add = l1->val + l2->val + carry;
            if(add > 9) {
                carry = 1;
                add = add - 10;
            } 
            else
                carry = 0;
            ptr->next = new ListNode(add);
            l1 = l1->next;
            l2 = l2->next;
            ptr = ptr->next;
        }
        if(l1) {
            while(l1) { 
                int add = l1->val + carry;
                if(add > 9) {
                    carry = 1;
                    add = add - 10;
                } 
                else
                    carry = 0;

                ptr->next = new ListNode(add);
                l1 = l1->next;
                ptr = ptr->next;
            }
        }
        else if(l2) {
            while(l2) { 
                int add = l2->val + carry;
                if(add > 9) {
                    carry = 1;
                    add = add - 10;
                } 
                else
                    carry = 0;

                ptr->next = new ListNode(add);
                l2 = l2->next;
                ptr = ptr->next;
            }
        }
        
        if(carry) 
            ptr->next = new ListNode(carry);
        
        return head->next;
    }
};