//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>> stockPrices;
        
        for(int i = 0; i < n; i++) {
            stockPrices.push_back({price[i], i + 1});
        }
        sort(stockPrices.begin(), stockPrices.end());
        
        int total = 0;
        for(int i = 0; i < n; i++) {
            int price1 = stockPrices[i].first;
            int day = stockPrices[i].second;
            int max = min(day, k / price1);
            total += max;
            k -= max * price1;
        }
        return total;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends