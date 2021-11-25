Question Link- https://leetcode.com/problems/reverse-integer/

//Naive Approach//

class Solution {
public:
    int reverse(int x) {
         long int ans = 0; 
    while(x != 0){
            
           int digit = x%10;
            ans = (ans * 10) + digit;
          x = x/10;
       }
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        return ans;
    }
};
