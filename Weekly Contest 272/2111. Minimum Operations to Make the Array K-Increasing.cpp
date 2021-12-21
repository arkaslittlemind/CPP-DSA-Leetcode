Question Link- https://leetcode.com/problems/minimum-operations-to-make-the-array-k-increasing/

// Binary Search (Longest Non-Decreasing Subsequence) //

class Solution {
private:
    int lnds(vector<int> &arr) {
        vector<int> temp;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            if(temp.size() == 0 || temp.back() <= arr[i]) {
                temp.push_back(arr[i]);
            }
            else {
                int ind = upper_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }
        return temp.size();
    }
    
public:
    int kIncreasing(vector<int>& arr, int k) {
        int n = arr.size();
        int minchanges = 0;
        for(int i = 0; i < k; i++) {
            vector<int> sbarr;
            for(int j = i; j < n; j += k) {
                sbarr.push_back(arr[j]);
            }
            minchanges += sbarr.size() - lnds(sbarr);
        }
        return minchanges;
    }
};
