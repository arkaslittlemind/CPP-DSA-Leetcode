Question Link- https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

//Brute Force Approach//

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="++X" || operations[i]== "X++") 
                ++ans;
            
            else
                --ans;
        }        
        return ans;
    }
};
