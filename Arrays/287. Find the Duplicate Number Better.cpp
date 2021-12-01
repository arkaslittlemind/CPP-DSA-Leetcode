Question Link- https://leetcode.com/problems/find-the-duplicate-number/

//Using Frequency Array//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n+1, 0);
        for(int i = 0; i<n; i++){
            if(ans[nums[i]]!=0){
                return nums[i];
            }
            else{
                ans[nums[i]]++;
            }
                
        }
        return -1;
    }
};
