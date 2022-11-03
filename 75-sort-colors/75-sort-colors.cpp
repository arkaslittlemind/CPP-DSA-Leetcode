class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        if (n == 0) return; //edge case
        
        int low = 0;
        int mid = 0;
        int high = n - 1; //initialising three pointers
        
        while(mid <= high){
            switch(nums[mid]){
                    
                    case 0: //for element 0
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                    case 1: //for element 1
                    mid++;
                    break;
                    
                    case 2: //for element 2
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};