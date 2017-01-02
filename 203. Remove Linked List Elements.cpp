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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p = new ListNode(0);
        p -> next = head;
        ListNode *q = p;
        while(q){
            if(q -> next && q -> next -> val == val) q -> next = q -> next -> next;
            else q = q -> next;
        }
        return p -> next;
    }
};