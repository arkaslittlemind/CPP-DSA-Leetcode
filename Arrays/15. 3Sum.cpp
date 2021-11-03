Question Link- https://leetcode.com/problems/3sum/

//Brute Force Approach//

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	    // Brute Force Solution Time O(N^3) & Auxiliary Space O(1)
        int len=nums.size();
        if(len==0 || len<3) // Atleast three elemnets needed for a triplet
            return {};
        set<vector<int>> s; // Set stores unique elements only(duplicate triplets not added)
        sort(nums.begin(),nums.end());
        // Compare all cases of group of three elements for their sum=0 in O(N^3) time
        for(int i=0;i<len-2;i++){
            for(int j=i+1;j<len-1;j++){
                for(int k=j+1;k<len;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        s.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        // Insert all unique triplets in result vector
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};
