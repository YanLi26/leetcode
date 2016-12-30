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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head -> next == NULL) return NULL;
        ListNode* pre = head;
        ListNode* curr = head;
        for(int i = 0; i < n; i ++){
            curr = curr ->next;
        }
        if(!curr) return head -> next;
        while(curr -> next){
            curr = curr -> next;
            pre = pre -> next;
        }
        pre -> next = pre -> next -> next;
        return head;
    }
};