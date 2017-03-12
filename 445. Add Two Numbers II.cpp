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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        stack<int> ls1, ls2;
        while(l1){
            ls1.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            ls2.push(l2->val);
            l2=l2->next;
        }
        int sum = 0;
        while(!ls1.empty()||!ls2.empty()){
            if(!ls1.empty()) {sum += ls1.top(); ls1.pop();}
            if(!ls2.empty()) {sum += ls2.top(); ls2.pop();}
            ListNode* tmp = new ListNode(sum%10);
            tmp -> next = ans -> next;
            ans -> next = tmp;
            sum/=10;
        }
        if(sum != 0){
            ListNode* tmp = new ListNode(sum);
            tmp -> next = ans -> next;
            ans -> next = tmp;
        }
        return ans->next;
    }
};