Question Link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Optimal Approach//

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice= INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minPrice= min(minPrice, prices[i]);
            maxProfit= max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    }
};