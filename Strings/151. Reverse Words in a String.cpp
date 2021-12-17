Question link- https://leetcode.com/problems/reverse-words-in-a-string/

// Using Two Pointers //

class Solution {
public:
    string reverseWords(string s) {
      string result, temp;
        int i = 0, j, length = s.size();
        while(true) {
             while (i < length && s[i] == ' ') i++;
              if (i >= length) break;
            j = i + 1;
            while (j < length && s[j] != ' ') j++;
            temp = s.substr(i, j - i);
            result = temp + (result.size() ? " " : "") + result;
            
            i = j + 1;
        }
        return result;
    }
};
