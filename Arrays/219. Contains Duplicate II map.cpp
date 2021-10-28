Question Link- https://leetcode.com/problems/contains-duplicate-ii/

// Using Map//

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0; i<nums.size();i++){
            if(map.count(nums[i])){
                int difference = abs(map[nums[i]] - i);
                if(difference <= k) return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};
