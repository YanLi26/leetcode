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
    ListNode* swapPairs(ListNode* head) {
        ListNode *tmp = head;
        ListNode *tmp_2 = head;
        int tag = 0;
        while(tmp != NULL && tmp ->next != NULL){
            tmp = tmp -> next;
            int value = tmp -> val;
            tmp -> val = tmp_2 -> val;
            tmp_2 -> val = value;
            tmp = tmp -> next;
            tmp_2 = tmp;
        }
        return head;
    }
};