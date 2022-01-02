Question Link- https://leetcode.com/contest/weekly-contest-274/problems/destroying-asteroids/

// Brute Force Approach //

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin(), asteroids.end());
        
        long long currentMass = mass;
        for(int i = 0; i < n; i++) {
            if(currentMass >= asteroids[i]) {
                currentMass += asteroids[i];
            }
        
        else return 0;
        }
        return 1;
    }
};
