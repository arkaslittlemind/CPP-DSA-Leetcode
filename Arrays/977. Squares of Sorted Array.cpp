[Question Link](https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/)

//Brute Force Approach//

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
         nums[i]= pow(nums[i],2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
