Question Link- https://leetcode.com/problems/number-of-1-bits/

//Brute Force Approach//

class Solution {
public:
    int hammingWeight(uint32_t n) {
       int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
             n = n>>1;
        }
        return count;
    }
};
