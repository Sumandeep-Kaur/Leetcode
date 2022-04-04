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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow = head, *fast = head;
        ListNode *p1, *p2;
        
        while(--k)
            fast = fast->next;
        
        p1 = fast;
        while(fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        p2 = slow;
        
        swap(p1->val, p2->val);
        return head;
    }
};