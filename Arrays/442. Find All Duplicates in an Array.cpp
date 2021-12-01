Question Link- https://leetcode.com/problems/find-all-duplicates-in-an-array/

//Brute Force Approach//

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> duplicates;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int indexOfElem = abs(nums[i]) - 1;
            
            nums[indexOfElem] = -nums[indexOfElem];
            
              if(nums[indexOfElem]>0)
                duplicates.push_back(indexOfElem+1);
        }
        return duplicates;
    }    
};
