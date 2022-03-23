Question Link- https://leetcode.com/problems/broken-calculator/

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue >= target)
            return startValue - target;
        
        if(target & 1)// if odd
            return 1 + brokenCalc(startValue, target  + 1);
        
        // if even
        return 1 + brokenCalc(startValue, target / 2);
    }
};
