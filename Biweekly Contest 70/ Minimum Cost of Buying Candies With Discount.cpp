Question Link- https://leetcode.com/contest/biweekly-contest-70/problems/minimum-cost-of-buying-candies-with-discount/

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size(), res = 0;
        sort(cost.begin(), cost.end());
        int i = n - 1;
        while(i >= 0){
            if(i >= 0) res += cost[i];
            i--;
            if(i >= 0) res += cost[i];
            i--;
            i--;
        }
        return res;
    }
};
