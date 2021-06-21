class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n, false);
        for(int i=0; i<n; ++i)
        {
            if(!v[nums[i]-1])
            {
                v[nums[i]-1] = true;
            }
            else
            {
                return nums[i];
            }
        }
        return 1;
    }
};