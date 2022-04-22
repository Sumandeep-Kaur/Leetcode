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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* mid = getMid(head);
        ListNode *left = sortList(head), *right = sortList(mid);
        return merge(left, right);
    }
    
    ListNode* getMid(ListNode* head) {
        ListNode *slow = NULL, *fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = (slow == NULL) ? head : slow->next;
            fast = fast->next->next;
        }
        
        ListNode* mid = slow->next;
        slow->next = NULL;
        return mid;
    }
    
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* ptr = dummyHead;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                ptr->next = list1;
                list1 = list1->next;
            } 
            else {
                ptr->next = list2;
                list2 = list2->next;
            }
            ptr = ptr->next;
        }
        if(list1) 
            ptr->next = list1;
        else 
            ptr->next = list2;

        return dummyHead->next;
    }
};