class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *head=node->next;
        node->val = head->val;
        node->next = head->next;
        delete(head);
    }
};