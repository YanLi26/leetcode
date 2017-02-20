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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* quick = head;
        stack<int> isPali;
        isPali.push(slow->val);
        while(quick && quick -> next && quick->next->next){
            slow = slow -> next;
            quick = quick -> next -> next;
            isPali.push(slow->val);
        }
        if(quick->next==NULL) isPali.pop();
        while(slow->next){
            slow = slow->next;
            if(slow->val == isPali.top()) isPali.pop();
            else return false;
        }
        return true;
    }
};