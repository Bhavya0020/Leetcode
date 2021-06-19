class Solution {
public:
    vector<vector<int>> ans;
    void fun(int i,int n,vector<int>& ar,vector<int> &t){
        ans.push_back(t);
        for(int x = i;x < n;x++){
            if(x != i && ar[x] == ar[x-1])  continue;
            t.push_back(ar[x]);
            fun(x+1,n,ar,t);
            t.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> t;
        sort(nums.begin(),nums.end());
        fun(0,nums.size(),nums,t);
        return ans;
    }
};