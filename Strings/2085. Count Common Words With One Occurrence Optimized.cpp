Question Link- https://leetcode.com/contest/biweekly-contest-66/problems/count-common-words-with-one-occurrence/

//Using a single Hash Map//

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1;
        for(auto &it: words1) mp1[it]++;
        for(auto &it: words2){
            if(mp1[it] < 2){
                mp1[it]--;
            }
        } 
        
        int count = 0;
        for(auto it: mp1){
           if(it.second == 0) count++;
    }
    return count;
    }
};
