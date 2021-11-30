Question Link- https://leetcode.com/contest/weekly-contest-269/problems/k-radius-subarray-averages/

//Using Sliding Window Concept//

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> ans(n, -1);
        long sum = 0;
        int length = 2 * k + 1;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(i >= length) sum -= nums[i - length];
            if(i >= length - 1) ans[i - k] = sum / length;
        }
        return ans;
    }
};
