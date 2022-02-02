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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int len1 = 0, len2 = 0;
        ListNode* p1 = head1;
        ListNode* p2 = head2;
        while(p1 != NULL) {
            len1++; 
            p1 = p1->next;
        }
        while(p2 != NULL) {
            len2++; 
            p2 = p2->next;
        }  
        
        int diff = len1 - len2;
        if(diff < 0) {
            while(diff++ != 0)
                head2 = head2->next;
        }
        else {
            while(diff-- != 0)
                head1 = head1->next;
        }
        
        while(head1 != NULL) {
            if(head1 == head2)
                return head1;
            head1 = head1->next;
            head2 = head2->next;
        }
        return NULL;
    }
};