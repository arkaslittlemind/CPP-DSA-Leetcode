Question Link- https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for(auto &ch : word){
            if(isupper(ch)) upper++;
        }
        return upper==0 || (upper==1 && isupper(word[0])) || upper==word.size();
    }
};
