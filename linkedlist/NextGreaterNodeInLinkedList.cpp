class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode *prev = NULL,*curr = head,*temp = NULL;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
        return head;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        head = reverse(head);
        stack<int> s;
        while(head){
            if(s.empty()){
                v.push_back(0);
            }
            else{
                int temp = head->val;
                while(!s.empty() && s.top() <= temp){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(0);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(head->val);
            head = head->next;
        }
        std::reverse(v.begin(),v.end());
        return v;
    }
};