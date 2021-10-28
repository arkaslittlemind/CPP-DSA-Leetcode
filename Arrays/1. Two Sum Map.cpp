Question Link- https://leetcode.com/problems/two-sum/

//Map Approach Optimized//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        int k;
        for(int i=0; i<nums.size(); i++){
            k= target-nums[i];
            if(mp.find(k)!= mp.end()){
                ans.push_back(mp[k]);
                ans.push_back(i);
            } 
            mp[nums[i]]=i;
        }
        return ans;
    }
};
