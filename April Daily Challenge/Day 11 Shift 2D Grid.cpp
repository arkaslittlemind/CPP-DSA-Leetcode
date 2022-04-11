Question Link- https://leetcode.com/problems/shift-2d-grid/

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         int m=grid.size(), n=grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0; i<n*m; i++){
           int temp=(i+k)%(n*m);
           ans[temp/n][temp%n]=grid[i/n][i%n];
        }
        return ans;
    }
};
