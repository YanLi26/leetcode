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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        if(lists.size() == 1) return lists[0];
        for(int i = 1; i < lists.size(); i++){
            mergeTwoLists(lists[0], lists[i]);
        }
        return lists[0];
    }
    void mergeTwoLists(ListNode* &listOne, ListNode* listTwo){
        ListNode* psuHead = new ListNode(-1);
        ListNode* tmp = psuHead;
        ListNode* pOne = listOne, *pTwo = listTwo;
        while(pOne && pTwo){
            if(pOne->val > pTwo->val){
                tmp->next = pTwo;
                tmp = tmp->next;
                pTwo = pTwo->next;
            }
            else{
                tmp->next = pOne;
                tmp = tmp->next;
                pOne = pOne->next;
            }
        }
        if(pOne) tmp->next = pOne;
        if(pTwo) tmp->next = pTwo;
        listOne = psuHead->next;
        delete psuHead;
    }
};