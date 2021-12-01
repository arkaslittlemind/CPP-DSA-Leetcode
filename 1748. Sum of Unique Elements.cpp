Question Link- https://leetcode.com/problems/sum-of-unique-elements/

//Using Unordered Map//

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      unordered_map<int, int> mp;
      int n = nums.size();
      
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
           }
        int sum = 0;
        for(auto &it: mp){
            if(it.second == 1)
                sum += it.first;
        }
        return sum;
    }
};
