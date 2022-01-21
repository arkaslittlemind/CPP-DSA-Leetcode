Question Link- https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int totalCost(0), totalGas(0);
        for(int i = 0; i < n; i++){
            totalCost += cost[i];
            totalGas += gas[i];
        }
        if(totalCost > totalGas)
            return -1;
        
        int currFuel(0), start(0);
        for(int i = 0; i < n; i++){
            if(currFuel < 0){
                start = i;
                currFuel = 0;
            }
            currFuel += (gas[i] - cost[i]);
        }
        return start;
    }
};
