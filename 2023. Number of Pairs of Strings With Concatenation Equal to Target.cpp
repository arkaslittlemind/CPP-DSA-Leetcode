Question Link- https://leetcode.com/contest/biweekly-contest-62/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

//Brute Force Approach//

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n= nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
            string x = nums[i] + nums[j];
            if(x==target)
                cnt++;
          }
        }
        return cnt;
        
    }
};
