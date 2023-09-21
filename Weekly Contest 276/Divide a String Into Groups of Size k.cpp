Question Link- https://leetcode.com/contest/weekly-contest-276/problems/divide-a-string-into-groups-of-size-k/
Vector approach


class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> ans;
        string res = "";
        for(int i = 0; i < n; i++){
            res += s[i];
            if(res.size() == k){
                ans.push_back(res);
                res = "";
            }
        }
        if(res.size() > 0 && res.size() != k){
            while(res.size() != k){
                res += fill;
            }
            ans.push_back(res);
        }
        return ans;
    }
};
