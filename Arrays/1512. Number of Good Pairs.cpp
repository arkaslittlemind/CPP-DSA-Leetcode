Question Link- https://leetcode.com/problems/number-of-good-pairs/

//Brute Force Approach//

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]!=nums[j])
                    break;
                    good_pairs++;
                }
        }
        return good_pairs;
    }
};
