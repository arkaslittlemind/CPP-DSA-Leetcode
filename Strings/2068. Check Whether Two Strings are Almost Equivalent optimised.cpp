Question Link- https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

//Optimised using a single Array//

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int cnt[26] = {};
        for (char ch : word1) cnt[ch - 'a']++;
        for (char ch : word2) cnt[ch - 'a']--;
        for (int i = 0; i < 26; ++i) {
            if (abs(cnt[i]) > 3) return false;
        }
        return true;
    }
};
