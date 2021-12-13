Question Link- https://leetcode.com/problems/partition-equal-subset-sum/

//DP Tabulation//

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        sum = accumulate(nums.begin(), nums.end(), sum);
       
        return (sum%2==0) && solve(nums, sum/2);
    }
private:
    int sum = 0;
    
    bool solve(vector<int> &nums, int sum){
        int n = nums.size();
        vector<bool> dp(sum+1, false);
        
        dp[0] = true;
        
        for (auto num : nums) {
			for (int j = sum; j >= num; j--) {
				if(dp[j-num] || j == num) dp[j] = true; 
			}
		}
        return dp[sum];
        
        
    }
};
