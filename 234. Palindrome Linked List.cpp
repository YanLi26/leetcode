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
        if(!head || !head -> next) return true;
        ListNode *slow = head;
        ListNode *fast = head;
        stack<int> pali;
        pali.push(slow -> val);
        while(fast!=NULL && fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            pali.push(slow -> val);
        }
        if(fast -> next == NULL) pali.pop();
        while(slow -> next){
            slow = slow -> next;
            if(slow -> val == pali.top()) pali.pop();
            else return false;
        }
        return true;
    }
};