class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
                if(mp[target - nums[i]]){
                if(target - nums[i] == nums[i]){
                    if(mp[nums[i]] > 1){
                        v.push_back(i);
                        ans = target - nums[i];
                        break;
                    }
                }
                else{
                    v.push_back(i);
                        ans = target - nums[i];
                        break;
                    }
                }
        }
        for(int i = 0;i<n;i++){
            if(nums[i] == ans && v[0] != i){
                v.push_back(i);
            break;
            }
        }
        return v;
    }
};