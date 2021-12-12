Question Link- https://leetcode.com/contest/biweekly-contest-67/problems/find-subsequence-of-length-k-with-the-largest-sum/

//Hashing and Sorting//

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>temp;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        vector<pair<int,int>>ans;
        //int n=nums.size();
        for(int i=n-1;i>=n-k;i--)
            ans.push_back({temp[i].second,temp[i].first});
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
            v.push_back(ans[i].second);
        return v;
    }
};
