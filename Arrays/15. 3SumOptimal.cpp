Question Link- https://leetcode.com/problems/3sum/

//Optimal Solution Two Pointer Algorithm//

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
		// Optimal Solution Time O(N^2) & Auxiliary Space O(1)
		// Two Pointer Algorithm
        int len=nums.size();
        vector<vector<int>> res;
        if(len<3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<len; i++){
            if(i>0 && nums[i]==nums[i-1])
			    // Skip the duplicate elements by incrementing the i index.
                // 'continue' terminates current iteration and
                // begins next iteration of for loop
                continue; 
            // Keeping nums[i] same, check for sum of triplets=0 
            // from i+1 till the end of nums vector
            int left = i + 1, right = nums.size() - 1; 
            while(left<right) 
            {    
                if(nums[i] + nums[left] + nums[right] == 0){
                    res.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    // To skip duplicate elements at left pointer
                    while(left<right && nums[left]==nums[left+1]) 
                        left++;
                    // To skip duplicate elements at left pointer
                    while(left<right && nums[right]==nums[right-1]) 
                        right--;
                    // One unique triplet has been found.
                    // Increment left & decrement right for  
                    // next triplet to be unique
                    left++;
                    right--;
                }
                // Since nums is sorted, so left will be smallest in 
                // [nums[left],nums[right]] interval and if triplet sum<0,
                // then incrementing left will increase the sum
                else if(nums[i]+nums[left]+nums[right]<0) 
                    left++; 
                // Since nums is sorted, so right will be largest in 
                // [nums[left],nums[right]] interval and if triplet sum>0,
                // then decrementing right will decrease the sum
                else
                    right--; 
            }
                
        }
        return res;
    }
};
