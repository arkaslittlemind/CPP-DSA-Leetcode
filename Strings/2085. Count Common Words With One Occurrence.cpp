Question Link- https://leetcode.com/contest/biweekly-contest-66/problems/count-common-words-with-one-occurrence/

//Brute Force using Two Hash Maps//

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> mp1, mp2;
        for(auto &it: words1) mp1[it]++;
        for(auto &it: words2) mp2[it]++;
        
        int count = 0;
        for(auto it: mp1){
            if(it.second == 1){
                if(mp2[it.first] == 1) count++;
        }
    }
    return count;
    }
};

