Question Link- https://leetcode.com/contest/weekly-contest-269/problems/find-target-indices-after-sorting-array/

//Using Count Sort//

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      int cntLess = 0;
      int cntTarget = 0;
        for(auto &it: nums){
            cntTarget += (it == target);
            cntLess += (it < target);
        }
        vector<int> ans;
        while(cntTarget--){
            ans.push_back(cntLess++);
        }
        return ans;
     }
};
