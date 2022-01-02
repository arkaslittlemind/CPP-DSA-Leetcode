Question Link- https://leetcode.com/contest/weekly-contest-274/problems/check-if-all-as-appears-before-all-bs/

// Brute Force Approach //

class Solution {
public:
    bool checkString(string s) {
        int len = s.length();
        bool bFound = 0;
        for(int i = 0; i < len; i++) {
            if(s[i] == 'a' && bFound == 1) return 0;
            if(s[i] == 'b') bFound = 1;
        }
        return 1;
    }
};
