Question Link- https://leetcode.com/contest/weekly-contest-272/problems/find-first-palindromic-string-in-the-array/

// Brute Force //

class Solution {
    private:
    bool checkPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while(l <= r) {
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &it: words) {
            if(checkPalindrome(it)) return it;
        }
        return "";
    }
};
