Question Link- https://leetcode.com/problems/duplicate-zeros/

//Brute Force Approach//

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i,j;
        int n = arr.size();
        for(i = 0; i<n; i++){
            if(arr[i] == 0){
                arr.insert(arr.begin()+i, 0);
                arr.pop_back();
                i++;
            }
        }
        return;
    }
};
