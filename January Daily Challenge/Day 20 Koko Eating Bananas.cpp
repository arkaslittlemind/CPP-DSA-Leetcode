Question Link- https://leetcode.com/problems/koko-eating-bananas/

class Solution {
    bool validateSpeed(vector<int> &piles, int h, int speed){
        int hrs = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++){
            int temp = piles[i]/speed;
            if(piles[i] % speed != 0)
                temp++;
            hrs += temp;
            if(hrs > h)
                break;
        }
        return hrs <=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int min_speed = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            bool res = validateSpeed(piles, h, mid);
            if(res == true){
                min_speed = min(min_speed, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            
        }
        return min_speed;
    }
};
