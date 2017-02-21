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
        if(!head) return NULL;
        ListNode* tmp = head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;

        while(tmp){
            if(tmp->val == val){
                pre -> next = tmp -> next;
                if(tmp -> next) tmp = pre -> next;
                else break;
                continue;
            }
            pre = pre -> next;
            tmp = tmp -> next;
        }
        return dummy->next;
    }
};