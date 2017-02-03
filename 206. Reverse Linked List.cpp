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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        //pre is a ListNode which point to the first element
        ListNode* pre = new ListNode(0);
        pre -> next = head;
        //cur is a ListNode which point to the current element
        ListNode* cur = head;
        //change cur->next and pre->next
        while(cur -> next){
            ListNode* tmp = cur -> next;
            cur -> next = tmp -> next;
            tmp -> next = pre -> next;
            pre -> next = tmp;
        }
        return pre -> next;
    }
};