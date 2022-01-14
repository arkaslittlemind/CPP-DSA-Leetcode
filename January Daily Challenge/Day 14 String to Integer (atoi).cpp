Question Link- https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
         stringstream obj(s); 
        int ans=0;
        obj>>ans; 
       
        return ans; 
    }
};
