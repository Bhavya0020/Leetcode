class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)
            return 0;
        int sum = 0;
        if(root->val >= low && root->val <= high){
            sum += root->val;
        }
        return sum + (root->left ? rangeSumBST(root->left,low,high) : 0) 
            + (root->right? rangeSumBST(root->right,low,high) : 0);
    }
};