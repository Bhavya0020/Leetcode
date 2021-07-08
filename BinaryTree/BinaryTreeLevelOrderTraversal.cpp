/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int h(TreeNode* root){
        if(!root)   return 0;
        return max(h(root->left),h(root->right)) + 1; 
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = h(root);
        vector<vector<int>> ans(n);
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            if(q.front().first == NULL){
                q.pop();
                continue;
            }
            TreeNode* x = q.front().first;
            int l = q.front().second;
            q.pop();
            ans[l].push_back(x->val);
            q.push({x->left,l+1});
            q.push({x->right,l+1});
        }
        return ans;
    }
};