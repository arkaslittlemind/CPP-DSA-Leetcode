Question Link- https://leetcode.com/problems/continuous-subarray-sum/

//Brute Force Approach//

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for(int i=0; i<nums.size()-1; i++){
            int sum= nums[i];
            for(int j=i+1; j<nums.size(); j++){
                sum+=nums[j];
                if(sum % k==0){
                    return true;
                }
            }
        }
        return false;
    }
};
