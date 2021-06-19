class Solution {
public:
    vector<vector<int>> ans;
    void fun(int st,int n,int target,vector<int>& ar,vector<int> &v){
        if(target == 0){
            ans.push_back(v);
            return;
        }
        else{
            for(int i = st;i<n;i++){
                if(target - ar[i] >= 0){
                    v.push_back(ar[i]);
                    fun(i,n,target - ar[i],ar,v);
                    v.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        fun(0,candidates.size(),target,candidates,v);
        return ans;
    }
};