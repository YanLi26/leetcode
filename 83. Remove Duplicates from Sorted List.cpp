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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode *carry = head;
        while(carry -> next != NULL){
            if(carry -> val == carry -> next -> val){
                carry -> next = carry -> next -> next;
            }
            else carry = carry -> next;
        }
        return head;
    }
};
