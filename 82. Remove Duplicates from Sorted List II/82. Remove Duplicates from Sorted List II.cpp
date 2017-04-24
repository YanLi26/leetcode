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
        if(!head || !head->next) return head;
        ListNode* begin = new ListNode(-1);
        begin -> next = head;
        ListNode* pre = begin, *curr = head -> next, *end = head;
        int count = 0;
        while(curr) {
            if(end -> val == curr -> val) {
                end = end -> next;
                curr = curr -> next;
                ++count;
            }
            else {
                if(count > 0) begin -> next = curr;
                else begin = end;
                count = 0;
                end = curr;
                curr = curr -> next;
            }
        }
        if(count > 0) begin -> next = NULL;
        return pre -> next;
    }
};