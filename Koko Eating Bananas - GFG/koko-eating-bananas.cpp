//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
  private:
    long long totalHours(vector<int> &piles, int hourly) {
        long long total = 0;
        for(int i = 0; i < piles.size(); i++) {
            total += ceil((double)piles[i] / (double)hourly);
        }
        return total;
    }
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        while(low <= high) {
            int mid = low +((high - low) / 2);
            long long totalTime = totalHours(piles, mid);
            
            if(totalTime <= H) {
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends