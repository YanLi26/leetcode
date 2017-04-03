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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *pre = head, *last = head, *psuHead = new ListNode(-1);
        int num = 0;
        psuHead -> next = head;
        while(pre){
            pre = pre->next;
            ++num;
        }
        pre = psuHead;
        while(num >= k){
            last = pre->next;
            for(int i = 1; i < k; ++i){
                ListNode* tmp = last->next;
                last->next = last->next->next;
                tmp->next = pre->next;
                pre->next = tmp;
            }
            pre = last;
            num -= k;
        }
        return psuHead->next;
    }
};