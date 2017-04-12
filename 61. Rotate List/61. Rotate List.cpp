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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k == 0) return head;
        int num = 0;
        ListNode* last = head, *tmp = head;
        while(tmp != NULL){
            last = tmp;
            tmp = tmp->next;
            ++num;
        }
        k %= num;
        if(num == 1 || num == k || k==0) return head;
        tmp = head;
        for(int i = 0; i < num-k-1; i++){
            tmp = tmp->next;
        }
        ListNode* first = tmp->next;
        tmp->next = NULL;
        last -> next = head;
        return first;
    }
};