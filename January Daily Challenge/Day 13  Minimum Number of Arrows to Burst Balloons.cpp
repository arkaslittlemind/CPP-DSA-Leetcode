Question Link- https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

class Solution {
public:
    static bool sortbyend(vector<int>& p,vector<int>& q)
    {
        return p[1]<q[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if(n==0) return 0;
        sort(points.begin(),points.end(),sortbyend);
        int cnt=1,end=points[0][1];
        for(int i=1;i<n;i++)
        {
            if(end<points[i][0])
            {
                cnt++; end=points[i][1]; 
            }
        }
        return cnt;
    }
};
