Question Link- https://leetcode.com/problems/4sum-ii/

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        unordered_map<int,int> mp;
        //Traversing Part 1
        for (auto &it1: nums1)
            for (auto &it2:nums2)
                mp[it1+it2]++; 
        
        // Traversing Part 2
        for(auto &it3: nums3)
            for(auto &it4:nums4)
               if(mp.count(0-it3-it4)) count+=mp[0-it3-it4];
        
        return count;
    }
};
