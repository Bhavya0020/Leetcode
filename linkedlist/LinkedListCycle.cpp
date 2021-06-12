class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head,*slow = head;
        while(fast)
        {
            fast = fast->next;
            if(fast == slow)
                return true;
            if(fast)
                fast = fast->next;
            else 
                break;
            if(fast == slow)
                return true;

            slow = slow->next;
        }
        return false;
    }
};