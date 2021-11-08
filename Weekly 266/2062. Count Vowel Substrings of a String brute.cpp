Question Link-https://leetcode.com/contest/weekly-contest-266/problems/count-vowel-substrings-of-a-string/

//Brute Force Approach//

class Solution {
    private:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
public:
    int countVowelSubstrings(string word) {
    int cnt=0;
        int n= word.size();
        
        for(int i=0; i<n; i++){
            set<char> st;
            for(int j=i; j<n; j++){
                if(!isVowel(word[j])) break;
                st.insert(word[j]);
                if(st.size() == 5) cnt++;
            }
        }
        return cnt;
    }
};
