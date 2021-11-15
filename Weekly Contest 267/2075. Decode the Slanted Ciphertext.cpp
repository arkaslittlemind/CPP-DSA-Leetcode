Question Link- https://leetcode.com/contest/weekly-contest-267/problems/decode-the-slanted-ciphertext/

//Brute Force Approach//

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n= encodedText.length();
        int col = n/rows;
        string res;
        for(int i=0;i<col;i++){
            for(int j=i; j<n; j+=(col+1)){
                res += encodedText[j];
            }
        }
        while(res.back() == ' ') res.pop_back();
        return res;
        
    }
};
