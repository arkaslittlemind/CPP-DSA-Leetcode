Question Link- https://leetcode.com/contest/biweekly-contest-69/problems/longest-palindrome-by-concatenating-two-letter-words/

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> m1;
        for(auto i: words){
            m1[i]++;
        }
        int ans = 0;
        map<string, int> m2;
        for(auto i: m1){
            string x = i.first;
            string y = "";
            y += i.first[1];
            y += i.first[0];
            if(x != y){
                if(m2[x] == false && m2[y] == false){
                    int z = min(m1[x], m1[y]);
                    ans += z * 4;
                    m2[x] = true;
                    m2[y] = true;
                }
            }
        }
        map<string, int> m3;
        for(auto i: words){
            string x = i;
            string y = "";
            y += i[1];
            y += i[0];
            if(x == y){
                m3[x]++;
            }
        }
        bool cr = false;
        for(auto i: m3){
            if(m3[i.first] % 2 == 0){
                ans += m3[i.first] * 2;
            }
            else {
                if(cr == false) {
                    ans += 2;
                    cr = true;
                }
                int z = m3[i.first] - 1;
                ans += z * 2;
            }
        }
        return ans;
    }
};
