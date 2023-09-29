//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int ans = INT_MAX;
        int low = 0, high = n - 1;
        int index = -1;

        while(low <= high) {
            int mid = low + ((high - low) / 2);
            

            if(arr[low] <= arr[high]) {
                if(arr[low] < ans) {
                    index = low;
                }
                
                break;
            }
            
            if(arr[low] <= arr[mid]) {
                ans = min(arr[low], ans);
                index = low;
                low = mid + 1;
            }
            else {
                ans = min(arr[mid], ans);
                index = mid;
                high = mid - 1; 
            }
        }
        return index;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends