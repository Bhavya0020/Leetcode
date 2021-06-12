class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head,*curr;
        while(temp && temp->next){
                if(temp->next->val == temp->val){
                    curr = temp -> next;
                    temp->next = curr->next;
                    delete(curr);
                }
                else
                    temp = temp->next;
        }
        return head;
    }
};