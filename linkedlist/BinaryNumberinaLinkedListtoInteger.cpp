class Solution {
public:
    int listsize(ListNode* head){
        int size = 0;
        while(head){
            size++;
            head=head->next;
        }
        return size;
    }
    
    int getDecimalValue(ListNode* head) {
        int ans = 0,n = listsize(head);
        while(head){
            ans |= (1<<(n-1))*(head->val);
            n--;
            head=head->next;
        }
        return ans;
    }
};