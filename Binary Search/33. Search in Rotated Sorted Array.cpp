Question Link- https://leetcode.com/problems/search-in-rotated-sorted-array/

//Using Binary Search//

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            
            if(nums[mid]>=nums[low]){
                //left half is sorted
                if(target>=nums[low] && target<nums[mid])
                    high = mid-1;
                else
                    low = mid+1;
            }
            else{
                //right half is sorted
                if(target>nums[mid] && target<=nums[high])
                    low = mid+1;
                else
                    high = mid-1;
            }
        }
        return -1;
    }
};
