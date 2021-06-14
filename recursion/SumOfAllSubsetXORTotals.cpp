class Solution {
public:
    int fun(vector<int> &v,vector<int> &ar,int n,int i){
        if(i == n){
            int ans = 0;
            for(int a:v){
                ans = (ans ^ a);
            //    cout << a << " ";
            }
            return ans;
        }
        int a = fun(v,ar,n,i+1);
        v.push_back(ar[i]);
        int b = fun(v,ar,n,i+1);
        v.pop_back();
        return a + b;
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<int> v;
        return fun(v,nums,nums.size(),0);
    }
};