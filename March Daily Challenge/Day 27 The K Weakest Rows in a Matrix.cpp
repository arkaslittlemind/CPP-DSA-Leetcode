Question Link- https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // support variables
        int len = mat.size(), rowLen = mat[0].size() - 1;
        priority_queue<array<int, 2>> rows;
        vector<int> res(k);
        // populating rows
        for (int i = 0, l, r, m; i < len; i++) {
            l = 0;
            r = rowLen;
            while (l <= r) {
                m = (l + r) / 2;
                if (mat[i][m]) l = m + 1;
                else r = m - 1;
            }
            rows.push({l, i});
            if (rows.size() > k) rows.pop();
        }
        // partial sorting rows
        while (k--) {
            res[k] = rows.top()[1];
            rows.pop();
        }
        return res;
    }
};
