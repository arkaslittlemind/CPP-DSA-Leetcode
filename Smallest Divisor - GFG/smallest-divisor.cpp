//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    int helperFunc(vector<int> &nums, int divisor) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += ceil((double)nums[i] / (double)divisor);
        }
        return ans;
    }
  public:
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int low = 1, high = *max_element(nums.begin(), nums.end());
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            int res = helperFunc(nums, mid);
            
            if(res <= K) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends