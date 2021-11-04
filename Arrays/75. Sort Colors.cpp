Question Link- https://leetcode.com/problems/sort-colors/

//Optimised Dutch National Flag Algorithm//

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        
        while(mid<=high){
            switch(nums[mid]){
                    
                //if the element is zero
                case 0:
                swap(nums[low++], nums[mid++]);
                break;
                    
                //if the element is one
                case 1:
                mid++;
                break;
                    
                //if the element is two
                case 2:
                swap(nums[mid], nums[high--]);
                break;
                    
            }
        }
            
    }
};
