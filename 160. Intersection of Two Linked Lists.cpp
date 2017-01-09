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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        int cntA = 0, cntB = 0;
        ListNode *p = headA, *q = headB;
        while(p){
            p = p -> next;
            ++cntA;
        }
        while(q){
            q = q -> next;
            ++cntB;
        }
        if(cntA > cntB){
            for(int i = 0; i < cntA - cntB; i++){
                headA = headA -> next;
            }
        }
        else if(cntA < cntB){
            for(int i = 0; i < cntB - cntA; i++){
                headB = headB -> next;
            }
        }
        while(headA && headB && headA!=headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }
};