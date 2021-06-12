class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp, *prev = NULL, *curr = head;
        while (curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        int size = 0,mid;
        ListNode *fast = head,*slow = head,*temp = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = reverseList(slow);
        while(slow && temp){
            if(slow->val != temp->val){
                return false;
            }
            slow = slow->next;
            temp = temp->next;
        }
        return true;
        
    }
};