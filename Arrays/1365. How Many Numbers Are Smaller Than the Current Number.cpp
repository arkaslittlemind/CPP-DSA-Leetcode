Question Link- https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

//Brute Force Approach//

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int res=0;
        for(auto &j : nums){
            for(auto &i : nums)
                if(i<j)
                    res++;
                 ans.push_back(res);
        res=0;
            
        }
          return ans;
      }
  
};
