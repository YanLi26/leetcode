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
    ListNode* partition(ListNode* head, int x) {
        ListNode* begin = new ListNode(-1);
        begin->next = head;
        ListNode* pre = head, *curr = head, *res = begin;
        while(begin->next) {
            if(begin->next->val >= x) break;
            else begin = begin->next;
        }
        pre = begin, curr = begin->next;
        while(curr) {
            if(curr->val < x) {
                pre->next = curr->next;
                ListNode* tmp = begin->next;
                begin->next = curr;
                curr->next = tmp;
                curr = pre->next;
                begin = begin->next;
            }
            else {
                pre = pre->next;
                curr = curr->next;
            }
        }
        return res->next;
    }
};