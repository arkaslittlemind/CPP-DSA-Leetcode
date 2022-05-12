Question Link- https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         sort(begin(nums), end(nums));
		
        vector<vector<int>> output;
        output.emplace_back(nums);
        while (next_permutation(begin(nums), end(nums))) {
            output.emplace_back(nums);
        }
        return output;
    }
};
