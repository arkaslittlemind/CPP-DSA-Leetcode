Question Link- https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

//Using Binary Search//

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
       int start = 0, end =  n - 1, mid;
        
        if(nums.empty()) return false;
        
        while(start <= end)
        {
            mid = (start + end) >> 1;
            if(nums[mid] == target) return true;

            
            if( (nums[start] == nums[mid]) && (nums[end] == nums[mid]) ) {++start; --end;}

            else if(nums[start] <= nums[mid])
            {
                if( (nums[start] <= target) && (nums[mid] > target) ) end = mid - 1;
                else start = mid + 1; 
            }
            else
            {
                if((nums[mid] < target) &&  (nums[end] >= target) ) start = mid + 1;
                else end = mid-1;
            }
        }
        return false;  
    }
};
