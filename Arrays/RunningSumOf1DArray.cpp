class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int> ans;
        long long int sum = 0;
        for(int i = 0;i<v.size();i++){
            sum += v[i];
            ans.push_back(sum);
        }
        return ans;
    }
};