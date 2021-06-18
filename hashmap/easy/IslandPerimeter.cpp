class Solution {
public:
    bool fun(int x,int y,vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if(x < 0 || y < 0 || x >= n || y >= m){
            return true;
        }
        else if(grid[x][y] == 0){
            return true;
        }
        return false;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ct = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    if(fun(i-1,j,grid)) ct++;
                    if(fun(i+1,j,grid)) ct++;
                    if(fun(i,j-1,grid)) ct++;
                    if(fun(i,j+1,grid)) ct++;
                }
            }
        }
        return ct;
    }
};