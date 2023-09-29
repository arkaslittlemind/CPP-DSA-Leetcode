//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int low = 0, high = n - 1;
        int minElement = INT_MAX;
        
        while(low <= high) {
            int mid = low + ((high - low) / 2);
            
            if(arr[low] <= arr[high]) {
                minElement = min(minElement, arr[low]);
                break;
            }
            if(arr[low] <= arr[mid]) {
                minElement = min(minElement, arr[low]);
                low = mid + 1;
            }
            else {
                minElement = min(minElement, arr[mid]);
                high = mid - 1;
            }
        }
        return minElement;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends