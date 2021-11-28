Question Link- https://leetcode.com/problems/find-peak-element/

//Using Binary Search//

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int left = 0;
        int right = size(nums)-1;
        while(left < right){
            int mid = (left + right)/2;
            if(nums[mid] > nums[mid+1])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
