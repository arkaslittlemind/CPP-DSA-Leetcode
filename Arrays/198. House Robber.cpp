Question Link- https://leetcode.com/problems/house-robber/

//Brute Force Approach//

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int temp;
        int previous = 0, current = 0;
        for(int i = 0; i<n; i++){
            temp = max(previous + nums[i], current);
            previous = current;
            current = temp;
        }
        return current;
    }
};
