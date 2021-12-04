Question Link- https://www.codingninjas.com/codestudio/problems/pair-sum_697295?leftPanelTab=0

//Brute Force Approach//

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == s){
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
         }
     }
   }
    sort(ans.begin(), ans.end());
    return ans;
}
