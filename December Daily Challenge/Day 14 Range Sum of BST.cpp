Question Link- https://leetcode.com/problems/range-sum-of-bst/

// Recursive & Iterative Solution //

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int rangeSum(0);
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top(); st.pop();
            if(node->val>=L && node->val<=R) rangeSum+=node->val;
            if(node->val > L) {if(node->left) st.push(node->left);}
            if(node->val < R) {if(node->right) st.push(node->right);}
        }
        return rangeSum;
    }
};
