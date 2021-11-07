Question Link- https://leetcode.com/problems/next-permutation/

//Optimal Approach//

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(), k, l;
        for(k=n-2; k>=0; k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        
        }else{
              for(l=n-1; l>k; l--){
                  if(nums[l]>nums[k]){
                      break;
                  }
              }
              swap(nums[k], nums[l]);
            reverse(nums.begin()+k+l, nums.end());
          }    
    }
     
};
