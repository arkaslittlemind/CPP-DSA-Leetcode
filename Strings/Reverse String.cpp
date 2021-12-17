Question Link- https://leetcode.com/problems/reverse-string/

// Brute Force Approach //

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;
        
        while(start < end) {
            swap(s[start++], s[end--]);
        } 
    }
};
