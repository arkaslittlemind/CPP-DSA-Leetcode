Question Link- https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         
        int ls=0; 
        int len=nums.size(), count=0; 
        map<int,int> m; 
        m[0]=1;     
		             
        for(int i=0;i<len;i++){
            ls+=nums[i];
           
            count+=m[ls-k];
            m[ls]++; 
        }
        return count;
    }
};
