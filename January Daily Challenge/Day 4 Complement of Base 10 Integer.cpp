Question Link- https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    int bitwiseComplement(int n) {
        int x = 1;
        while(n > x) x = x * 2 + 1;
        
        return x - n;
    }
};
