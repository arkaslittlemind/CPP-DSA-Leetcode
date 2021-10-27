[Question Link](https://leetcode.com/contest/biweekly-contest-62/problems/convert-1d-array-into-2d-array/)

//Modulo Approach//


class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans1;
        //this is for impossible case//
        if(m*n != original.size()) return ans1;
        
        vector<vector<int>> ans(m, vector<int>(n,0));
        for(int i=0; i<original.size(); i++){
            ans[i/n][i%n] = original[i];
        }
        return ans;
    }
};
