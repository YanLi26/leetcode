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
    void deleteNode(ListNode* node) {
        ListNode *tmp;
        node->val = node->next->val;
        tmp = node->next;
        node->next = tmp->next;
        delete tmp;
    }
};
