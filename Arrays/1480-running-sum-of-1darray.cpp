/*

	Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

	Return the running sum of nums.
	
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumarr(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            sumarr[i]=sum;
        }
        
        return sumarr;
    }
};
