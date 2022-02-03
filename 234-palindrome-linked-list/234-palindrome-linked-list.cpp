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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr = head;
        int len = 0;
        while(ptr != NULL) {
            len++;
            ptr = ptr->next;
        }
        
        ptr = head;
        stack<int> st;
        for(int i = 0; i < len/2; i++) {
            st.push(ptr->val);
            ptr = ptr->next;
        }
        
        if(len % 2 == 1)
            ptr = ptr->next;
        
        for(int i = 0; i < len/2; i++) {
            if(st.top() != ptr->val)
                return false;
            else {
                st.pop();
                ptr = ptr->next;
            }
        }
        
        return true;
    }
};