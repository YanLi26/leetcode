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
        int aSize = 0, bSize = 0;
        ListNode* aTmp = headA;
        ListNode* bTmp = headB;
        while(aTmp){
            aTmp = aTmp -> next;
            aSize++;
        }
        while(bTmp){
            bTmp = bTmp -> next;
            bSize++;
        }
        aTmp = headA;
        bTmp = headB;
        if(aSize > bSize){
            for(int i = 0; i < aSize - bSize; i++){
                aTmp = aTmp -> next;
            }
        }
        if(aSize < bSize){
            for(int i = 0; i < bSize - aSize; i++){
                bTmp = bTmp -> next;
            }
        }
        while(aTmp && bTmp && aTmp != bTmp){
            aTmp = aTmp -> next;
            bTmp = bTmp -> next;
        }
        return aTmp;
    }
};