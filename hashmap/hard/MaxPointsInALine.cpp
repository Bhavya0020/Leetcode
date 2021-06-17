// Q. https://leetcode.com/problems/max-points-on-a-line/

class Solution {
public:
    int maxPoints(vector<vector<int>>& ar) {
    // n points can be said to lie on the same line if they have a common slope and they share a common point
        map<double,int> mp; // map is used to keep a track of all the slopes formed with a point and find the maximum number of point have a common slope with that point
        
        int mx = 0,n = ar.size();
        for(int i = 0;i<n - mx - 1;i++){
            int mx_sf = 0;
            for(int j = i + 1;j<n;j++){
//                 slope of a line is given by 
//                 s = (y2 - y1) / (x2 - x1)
                double s = DBL_MAX;
                if(ar[j][0] - ar[i][0] != 0){
                    s = (double)(ar[j][1] - ar[i][1])/((double)(ar[j][0] - ar[i][0]));
                }
                mp[s]++;
                mx_sf = max(mp[s],mx_sf);
            }
            mp.clear();
            mx = max(mx,mx_sf);
        }
        return mx+1;
    }
};