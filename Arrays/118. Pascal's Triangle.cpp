Question Link- https://leetcode.com/problems/pascals-triangle/

//Brute Force Approach//

class Solution {
public:
    vector<vector<int>> generate(int n) {
     
        if(n == 1 ) {return {{1}};}
        
        vector<vector<int>> res = {{1}};
        
        for(int i=1; i<n; i++)
        {
            vector<int> temp(i+1);
            temp[0] = 1; temp[i] = 1;
			
            for(int j=1; j<=i-1; j++)
            {
                temp[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(temp);
        }
        return res;
    }
};
