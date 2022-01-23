Question Link- https://leetcode.com/problems/sequential-digits/

class Solution {
public:
    vector<int> res;
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<10;i++)
        dfs(low,high,0,i);
        sort(res.begin(),res.end());
        return res;
    }
    void dfs(int low,int high,int tmp,int ind){
        if(tmp>=low && tmp<=high){
            res.push_back(tmp);
        }
        if(ind==10 || tmp>=high)
            return;
        dfs(low,high,tmp*10+ind,ind+1);
    }
};
