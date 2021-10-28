Question Link- https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/

// Brute Force Approach//

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n;
        int cnt=0;
        int evencnt=0;
        for(int i=0; i<nums.size();i++){
            n=nums[i];
            while(n>0){
                int digit = n%10;
                n/=10;
                cnt++;
            }
            if(cnt%2==0){
                evencnt++;
            }
            cnt=0;
        }
        return evencnt;
    }
};
