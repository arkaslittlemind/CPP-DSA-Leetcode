//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int mid = 0;
        int low = 0, high = N - 1;
    while (low <= high)

    {

        mid = (low + high) >> 1;

        if(Key == A[mid]) return true;
        
        //edge case
        if(A[low] == A[mid] && A[mid] == A[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        //check if left side is sorted
        if(A[low] <= A[mid]) {//checks if the Key is in the range
            if(Key >= A[low] && Key <= A[mid]){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        // right side is sorted
        else {//checks if the Key is in the range
            if(Key >= A[mid] && Key <= A[high]){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return false;
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
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends