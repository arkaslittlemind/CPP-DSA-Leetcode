Question Link- https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<int> st;
        int n = heights.size();
        for(int i = 0; i<=n; i++){
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i])){
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width = i;
                else width = i -st.top() - 1;
                
                maxArea = max(maxArea, width * height);
            }
            st.push(i);
        }
        return maxArea;
    }
};
