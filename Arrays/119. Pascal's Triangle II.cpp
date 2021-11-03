Question Link- https://leetcode.com/problems/pascals-triangle-ii/

//Brute Force Approach(vector)//

class Solution
{
public:
    vector<int> getRow(int n)
    {
        vector<int> ans{1};
        for (int i = 0; i < n; ++i)
        {
            vector<int> temp;
            if (i == 0)
            {
                ans.push_back(1);
            }
            else
            {
                int m = ans.size();
                temp.push_back(1);
                for (int p = 0; p < (m - 1); ++p)
                {
                    temp.push_back(ans[p] + ans[p + 1]);
                }
                temp.push_back(1);
                ans = temp;
            }
        }
        return ans;
    }
};
