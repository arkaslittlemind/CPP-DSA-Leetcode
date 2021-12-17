Question Link- https://leetcode.com/problems/string-compression/



class Solution {
public:
    int compress(vector<char>& chars) {
      int n = chars.size();
      int i = 0;
      int ansIndex = 0; 
        
        while(i < n) {
            int j = i + 1;
            while(j < n && chars[i] == chars[j]) {
                j++;
            }
            
            chars[ansIndex++] = chars[i];
            int count = j - 1;
            
            if(count > 1) {
                string cnt = to_string(count);
                for(char ch: cnt) {
                   chars[ansIndex++] = ch; 
                }
            }
            i = j;
        }
        return ansIndex;
    }
};
