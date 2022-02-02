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
        unordered_set<ListNode*> set;
        while(head1 != NULL) {
            set.insert(head1);
            head1 = head1->next;
        }
        while(head2 != NULL) {
            if(set.find(head2) != set.end())
                return head2;
            head2 = head2->next;
        }
        return NULL;
    }
};