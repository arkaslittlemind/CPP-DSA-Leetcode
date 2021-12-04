Question Link- https://leetcode.com/problems/unique-number-of-occurrences/

//Using 2 Unordered Maps//

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp1;
        
        for(int i = 0; i < n; i++){
            mp1[arr[i]]++;
        }
        unordered_map<int, int> mp2;
        
        for(auto &it: mp1){
            mp2[it.second]++;
        }
        for(auto &it: mp2){
            if(it.second != 1){
                return false;
            }
        }
        return true;
    }
};
