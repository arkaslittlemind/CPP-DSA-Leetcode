Question Link- https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

//Brute Force Approach//

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        for(char ch = 'a'; ch <= 'z'; ch++){
            int freq1 = 0;
            int freq2 = 0;
            for(auto &it: word1){
                if(it == ch)
                    freq1++;
            }
             for(auto &it: word2){
                 if(it == ch)
                     freq2++;
             }
            if(abs(freq1 - freq2) > 3) return false;
        }
        return true;
    }
};
