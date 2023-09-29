//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    //edge cases

        if(N == 1) return A[0];

        if(A[0] != A[1]) return A[0];

        if(A[N - 1] != A[N - 2]) return A[N - 1];

        //-----------------------------------------//

        int low = 1, high = N - 2;

        while(low <= high) {

            int mid = low + ((high - low) / 2);
            
            if(A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) return A[mid];

            //left half
            if((mid % 2 == 1 && A[mid] == A[mid - 1]) || (mid % 2 == 0 && A[mid] == A[mid + 1])) {
                low = mid + 1; //eliminate left half
            }

            //right half
            else {
                high = mid - 1; //eliminate right half
            }
        }
        return -1;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends