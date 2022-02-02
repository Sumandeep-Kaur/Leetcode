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
        ListNode* p1 = head1;
        ListNode* p2 = head2;
        
        while(p1 != p2) {
            p1 = p1 == NULL? head2 : p1->next;
            p2 = p2 == NULL? head1 : p2->next;
        }
        
        return p1;
    }
};