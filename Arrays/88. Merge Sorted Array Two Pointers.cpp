Question Link- https://leetcode.com/problems/merge-sorted-array/

//Using Two Pointers//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      //two pointer approach
        int p1=m-1,p2=n-1,i=m+n-1;
        while(p2>=0)
        {
            if(p1>=0 && nums1[p1]>nums2[p2])
            {
                nums1[i--]=nums1[p1--]; //if nums1 >nums2 then at i position nums1 will come
             }
            else
            {
                nums1[i--]=nums2[p2--]; //else nums2 will come at i position then pointer decreases
            }
        }
    }
};
