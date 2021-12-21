Question Link- https://leetcode.com/contest/weekly-contest-272/problems/adding-spaces-to-a-string/

//Brute Force Approach//

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string answer = "";
        int j = 0;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(j < spaces.size() && i == spaces[j]){
                answer += ' ';
                j++;
            }
            answer += s[i];
        }
        return answer;
    }
};
