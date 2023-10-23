Question Link- https://leetcode.com/contest/weekly-contest-267/problems/time-needed-to-buy-tickets/

//Brute Force Approach//
//Test//

class Solution {
public:
    int timeRequiredToBuy(vector<int>& a, int k) {
        int tm=0;
        for(int i=0; i<a.size();i++){
            if(i <= k) tm += min(a[i], a[k]);
            else tm += min(a[i], a[k]-1);
        }
        return tm;
    }
};
