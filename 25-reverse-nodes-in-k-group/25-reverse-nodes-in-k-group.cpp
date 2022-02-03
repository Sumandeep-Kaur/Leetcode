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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 1) 
            return head;
        
        int len = 0;
        ListNode* ptr = head;
        while(ptr != NULL){
            ptr = ptr->next;
            len++;
        }
        
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *cur = dummy;
        ListNode* pre = dummy;
        ListNode* nex = dummy;
        
        while(len >= k){
            cur = pre->next;
            nex = cur->next;
            
            for(int i = 1; i < k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            
            pre = cur;
            len -= k;
        }
        
        return dummy->next;
    }
};