class Solution {
public:
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *head = dummy;
        int ct = 0;
        while(ct < a){
            dummy->next = l1;
            l1 = l1->next;
            dummy=dummy->next;
            ct++;
        }
        // dummy->next = l2;
        while(l2){
            dummy->next = l2;
            l2=l2->next;
            dummy = dummy->next;
        }
        while(ct <= b){
            ct++;
            l1 = l1->next;
        }
        dummy->next = l1;
        dummy = head;
        head = head->next;
        delete(dummy);
        return head;
    }
};