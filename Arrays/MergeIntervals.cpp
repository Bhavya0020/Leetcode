class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int x = 0;
        for(int i = 1;i<intervals.size();i++){
            if(intervals[i][0] >= ans[x][0] && intervals[i][0] <= ans[x][1]){
                if(intervals[i][1] > ans[x][1]){
                    ans[x][1] = intervals[i][1];
                }
            }
            else{
                ans.push_back(intervals[i]);
                x++;
            }
        }
        return ans;
    }
};