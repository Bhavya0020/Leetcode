class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head){
            return NULL;
        }
        if(!head->next){
            return head;
        }
        ListNode *one= head,*two=head->next;
        int temp;
        while(one && two){
            temp = one->val;
            one->val = two->val;
            two->val = temp;
            one = two->next;
            if(one){
                two = one->next;
            }
        }
        return head;
    }
};