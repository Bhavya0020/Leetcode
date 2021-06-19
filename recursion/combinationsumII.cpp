class Solution {
public:
    vector<vector<int>> ans;
    void fun(int i,int n,int sum,vector<int> &ar,vector<int> &v){
        if(sum == 0){
            ans.push_back(v);
            return;
        }
        for(int x = i;x<n;x++){
            if(x != i && ar[x] == ar[x-1]) continue;
            if(sum - ar[x] >= 0){
                v.push_back(ar[x]);
                fun(x+1,n,sum-ar[x],ar,v);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& ar, int target) {
        vector<int> v;
        sort(ar.begin(),ar.end());
        fun(0,ar.size(),target,ar,v);
        return ans;
    }
};