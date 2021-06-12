class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head,*prev = NULL,*temp=NULL;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
        return prev;
    }
};