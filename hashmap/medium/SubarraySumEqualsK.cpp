class Solution {
public:
    int subarraySum(vector<int>& ar, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int ans = 0,n = ar.size(),sum = 0,st = 0;
        for(int i = 0;i < n;i++){
            sum += ar[i];
            if(mp.find(sum-k) != mp.end())
                ans += mp[sum - k];
            mp[sum]++;
        }
        return ans;
    }
};