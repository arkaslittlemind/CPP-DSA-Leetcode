Question Link- https://leetcode.com/contest/weekly-contest-276/problems/solving-questions-with-brainpower/

class Solution {
private:
    long long f(int ind, vector<vector<int>> &questions, vector<long long> &dp){
        if(ind == questions.size() - 1){
            return questions[ind][0];
        }
        if(ind >= questions.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        long long take = questions[ind][0] + f(ind + questions[ind][1] + 1, questions, dp);
        long long nottake = 0 + f(ind + 1, questions, dp);
        return dp[ind] = max(take, nottake);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(), -1);
        return f(0, questions, dp);
    }
};
