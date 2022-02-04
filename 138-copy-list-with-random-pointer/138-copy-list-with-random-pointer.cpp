/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return head;
        
        Node* temp = head;
        while(temp != NULL) {
            Node* node = new Node(temp->val);
            node->next = temp->next;
            temp->next = node;
            temp = node->next;
        }
        
        temp = head;
        while(temp != NULL) {
            temp->next->random = (temp->random) ? temp->random->next : NULL;
            temp = temp->next->next;
        }
        
        Node* original = head;
        Node* cloned = head->next;
        Node* clonedHead = head->next;
        
        while(original != NULL) {
            original->next = original->next->next;
            cloned->next = (cloned->next) ? cloned->next->next : NULL;
            
            original = original->next;
            cloned = cloned->next;
        }
        
        return clonedHead;
    }
};