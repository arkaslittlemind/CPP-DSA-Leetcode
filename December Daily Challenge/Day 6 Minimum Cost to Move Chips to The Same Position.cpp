Question Link- https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

//Greedy Approach//

class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int even=0,odd=0;
        for(int i=0;i<chips.size();i++){
            if(chips[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even>odd)
            return odd;
        return even;
        
    }
};
