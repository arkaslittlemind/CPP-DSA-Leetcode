Question Link- https://leetcode.com/contest/weekly-contest-266/problems/vowels-of-all-substrings/

//Brute Force Approach//

class Solution {
public:
    long long countVowels(string word) {
         long long n = word.length(), ans = 0;
        for (int i = 0; i < n; i++)
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
                ans += (n - i) * (i + 1);
        return ans;
        
    }
};
