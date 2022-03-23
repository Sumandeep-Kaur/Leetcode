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
    int pairSum(ListNode* head) {
        if(head->next->next == NULL)
            return head->val + head->next->val;
        
        ListNode *slow = head, *fast = head;
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *prev = NULL, *curr = slow->next, *next;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        slow->next = prev;
        slow = slow->next;
        
        int maxSum = INT_MIN;
        while(slow != NULL) {
            maxSum = max(maxSum, head->val + slow->val);
            head = head->next;
            slow = slow->next;
        }
        
        return maxSum;
    }
};