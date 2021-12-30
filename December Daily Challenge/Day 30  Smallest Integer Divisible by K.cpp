Question Link- https://leetcode.com/problems/smallest-integer-divisible-by-k/

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long sum = 1;
        for(int i = 1; i <= k; i++) {
            if(sum % k == 0) return i;
            
            sum = (sum * 10 + 1) % k;
        }
        return -1;
    }
};
