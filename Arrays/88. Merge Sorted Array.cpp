Question Link- https://leetcode.com/problems/merge-sorted-array/

//Brute Force Approach(Iterative)//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i=m-1,j=n-1,k=m+n-1;
    while(j>=0)
          i>=0 and nums1[i]>nums2[j]  ?  nums1[k--]=nums1[i--]  :  nums1[k--]=nums2[j--];
    }
};
