Question Link- https://leetcode.com/contest/weekly-contest-276/problems/minimum-moves-to-reach-target-score/

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps = 0;
        int cnt = 0;
        while(target > 1 && maxDoubles != 0){
            if(target % 2 == 0){
                target /= 2;
                maxDoubles -= 1;
            } else {
                target -= 1;
            }
            cnt++;
        }
        cnt += (target - 1);
        return cnt;
    }
};
