Question Link- https://leetcode.com/problems/kth-largest-element-in-an-array/

//Binary Search Approach//

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int l = -10001, r = 10001;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            int cnt = 0;
            for(auto num : nums) {
                if(num >= mid)
                    cnt++;
            }
            
            if(cnt >= k)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return r;
    }
};
