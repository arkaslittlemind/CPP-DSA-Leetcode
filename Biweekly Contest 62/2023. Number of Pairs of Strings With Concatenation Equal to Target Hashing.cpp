Question Link- https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

//Hashing Prefix & Suffix//

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        vector<int> prefix_matches(target.length()), suffix_matches(target.length());
        
        for (const string& nm : nums) {
            if (nm.length() >= target.length())
                continue;
            if (target.compare(0, nm.length(), nm) == 0) {
                prefix_matches[nm.length()]++;
            }
            
            if (target.compare(target.size() - nm.length(), nm.length(), nm) == 0) {
                suffix_matches[nm.length()]++;
            }
        }
        
        bool isSelfMatch = target.length() % 2 == 0
            && target.compare(0, target.length() / 2, target, target.length() / 2, target.length() / 2) == 0;
        
        size_t ans = 0;
        for (size_t l = 1; l < target.length(); l++) {
            if (2 * l == target.length() && isSelfMatch)
                ans += prefix_matches[l] * (prefix_matches[l] - 1);
            else
                ans += prefix_matches[l] * suffix_matches[target.length() - l];
    }
        return ans;
    }
};
