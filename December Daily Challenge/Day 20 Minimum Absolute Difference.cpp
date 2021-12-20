Question Link- https://leetcode.com/problems/minimum-absolute-difference/

// Sorting //

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int min_dif = INT_MAX;
        for(int i = 1; i < n; i++) {
            min_dif = min(min_dif, arr[i] - arr[i - 1]);
        }
        vector<vector<int>> ans;
        
        for(int i = 1; i < n; i++) {
             if(arr[i]-arr[i-1]==min_dif)
                 ans.push_back({arr[i-1],arr[i]});
        }
        return ans;
    }
};
