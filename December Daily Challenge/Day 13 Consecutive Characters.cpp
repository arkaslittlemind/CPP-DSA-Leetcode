Question Link- https://leetcode.com/problems/consecutive-characters/

// Using Two Pointers //

class Solution {
public:
    int maxPower(string s) {
        // support variables
        int res = 0, i = 0, j, len = s.size(), curr = s[0];
        while (i < len) {
            // updating j
            j = i + 1;
            // moving j to the first value of s[j] != curr
            while (j < len && curr == s[j]) j++;
            // updating res
            res = max(res, j - i);
            // setting curr and i for the next loop
            curr = s[j];
            i = j;
        }
        return res;
    }
};
