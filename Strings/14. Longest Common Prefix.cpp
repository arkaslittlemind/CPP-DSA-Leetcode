Question Link- https://leetcode.com/problems/longest-common-prefix/

//Brute Force Approach//

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n =strs.size();
        string answer; 
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n-1];
        for(int i =0; i< a.size(); i++){
            if(a[i] == b[i]){
                answer += a[i];
            }else break;
        }
        return answer;
    }
};
