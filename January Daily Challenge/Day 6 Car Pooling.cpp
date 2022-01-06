Question Link- https://leetcode.com/problems/car-pooling/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> mp;
        for (auto &it : trips)
            mp[it[1]] += it[0], mp[it[2]] -= it[0];
        for (auto &v : mp)
            if ((capacity -= v.second) < 0)
                return false;
        return true;
    }
};
