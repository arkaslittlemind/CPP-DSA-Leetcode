Question Link- https://leetcode.com/contest/biweekly-contest-66/problems/minimum-number-of-buckets-required-to-collect-rainwater-from-houses/

//Standard Greedy Approach//

class Solution {
public:
    int minimumBuckets(string street) {
        int ans = 0;
        int n = street.size();
        for(int i = 0; i < n; ){
            if(street[i] == 'H'){
                if(i + 1 < n && street[i+1] == '.'){
                    ans++;
                    i += 3;
                    continue;
                }
                if(i - 1 >= 0 && street[i-1] == '.'){
                    ans++;
                    i++;
                    continue;
                }
                return -1;
            } 
            i++;
        }
        return ans;
    }
};
