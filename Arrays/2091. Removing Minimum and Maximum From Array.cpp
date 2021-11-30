Question Link- https://leetcode.com/contest/weekly-contest-269/problems/removing-minimum-and-maximum-from-array/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i = min_element(nums.begin(), nums.end()) - nums.begin();
        int j = max_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();
            
        if(i > j) swap(i , j);
        return min(i + 1 + n - j, min(j + 1, n - i));
    }
};
