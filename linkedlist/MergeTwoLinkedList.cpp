class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *head = dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                dummy->next = l1;
                l1 = l1->next; 
            }
            else{
                dummy->next = l2;
                l2 = l2->next;
            }
            dummy = dummy->next;
        }
        if(l1){
            dummy->next = l1;
        }
        else{
            dummy->next = l2;
        }
        dummy = head;
        head = head->next;
        delete(dummy);
        return head;
    }
    
};