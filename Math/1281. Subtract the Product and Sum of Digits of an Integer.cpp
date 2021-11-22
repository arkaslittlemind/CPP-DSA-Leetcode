Question Link- https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

//Brute Force Approach//

class Solution {
public:
    int subtractProductAndSum(int n) {
       int product = 1;
        int sum = 0;
        while(n != 0){
            int digit = n%10;
            product = product*digit;
            sum = sum + digit;
            n = n/10;
        }
        int answer = product - sum;
        return answer;
    }
};
