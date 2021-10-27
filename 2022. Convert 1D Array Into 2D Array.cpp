//Brute Force Approach//

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        
        //this is  for impossible case
        
        if(m*n != original.size())
            return ans;
        
        int ind=0;
        for(int i=o; i<m; i++) {
            vector<int> col;
            
            for(int j=0; j<n; j++){
                col.push_back(original[ind++]);
            }
            
            ans.push_back(col);
        }
        
        return 0;
    }
};
