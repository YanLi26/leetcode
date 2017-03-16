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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //pre head
        ListNode* head = new ListNode(-1);
        ListNode* tmp = head;
        int carry = 0;
        //add l1->val l2->val and carry
        while(l1 || l2){
            int l1Val, l2Val;
            if(l1){
                l1Val = l1->val;
                l1 = l1->next;
            }
            else l1Val = 0;
            if(l2){
                l2Val = l2->val;
                l2 = l2->next;
            }
            else l2Val = 0;
            int value = l1Val + l2Val + carry;
            carry = value/10;
            ListNode* curr = new ListNode(value%10);
            tmp->next = curr;
            tmp = curr;
            
        }
        //check carry
        if(carry == 1){
            ListNode* curr = new ListNode(1);
            tmp->next = curr;
        }
        return head->next;
    }
};