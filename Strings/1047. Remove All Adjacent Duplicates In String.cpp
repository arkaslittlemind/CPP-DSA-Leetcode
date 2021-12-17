Question Link- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

// Using the given string as a stack //

class Solution {
public:
    string removeDuplicates(string s) {
       int i = 0;
        for(int j = 1; j < s.size(); ++j)
            if (i < 0 || s[i] != s[j]) s[++i] = s[j];
            else --i;
        return s.substr(0, i + 1);
    
    }
};
