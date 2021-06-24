class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> mp;
        stack<int> s;
        int m = nums1.size(),n = nums2.size();
        for(int i = n - 1;i>=0;i--){
            if(s.empty()){
                mp[nums2[i]] = -1;
            }
            else{
                while(!s.empty() && nums2[i] > s.top()){
                    s.pop();
                }
                if(s.empty()){
                    mp[nums2[i]] = -1;
                }
                else{
                    mp[nums2[i]] = s.top();
                }
            }
            s.push(nums2[i]);
        }
        for(int i = 0;i<m;i++){
            v.push_back(mp[nums1[i]]);
        }
        return v;
    }
};