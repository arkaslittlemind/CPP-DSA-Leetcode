Question Link- https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/

// Two Pointer Approach //

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
       int n = prices.size();
        int i = 0;
        long long ans = 0;
        while(i < n) {
            long long length = 1;
            
            while(i + 1 < n && (prices[i + 1] - prices[i] == -1)) {
                i++;
                length++;
            }
            ans += (length * (length + 1)) / 2;
            i++;
        }
        return ans;
    }
};
