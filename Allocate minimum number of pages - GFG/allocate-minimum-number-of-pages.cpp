//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{   
    int isPossible(int A[], int N, int mid) {
        int student = 1;
        int pages = 0;
        for(int i = 0; i < N; i++) {
            if(pages + A[i] <= mid) {
                pages += A[i];
            } else {
                student++;
                pages = A[i];
            }
        }
        return student;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M > N) return -1;
        
        int low = *max_element(A, A + N);
        int high = accumulate(A, A + N, 0);
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(isPossible(A, N, mid) <= M){
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends