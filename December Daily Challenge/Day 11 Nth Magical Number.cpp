Question Link- https://leetcode.com/problems/nth-magical-number/submissions/

//Using Binary Search//

class Solution {
public:
    #define mod 1000000007    
    
    int nthMagicalNumber(int n, int a, int b) {
        //Initialize the LCM fromula  
        int lcm = (a*b)/__gcd(a,b);
        //Initializing the left and right boundary
        long long int left=min(a,b) , right=n*1LL*min(a,b);
        //our ans 
        long long int ans = 0;
        //binary search algo implementation
        while(left<=right){
            //Middle position 
            long long int mid = (left + (right-left)/2);
            //inclusion exclusion principle for position_check
            long long int position_check = mid/b + mid/a - mid/lcm ;
            //if position is low ,increment left pointer
            if(position_check < n) left = mid +1 ;
            //else our ans and decrement the right pointer
            else {
             ans=mid%mod;
             right=mid-1;
         }
        }
        return ans;
    }  
};
