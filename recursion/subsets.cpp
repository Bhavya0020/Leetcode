class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> v;
        for(int i = 0;i < (1<<n);i++)
        {
            for(int j = 0;j<n;j++){
                if((i&(1<<j))){
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};