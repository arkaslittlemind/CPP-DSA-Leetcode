Question Link- https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

// Recursive Solution //

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root, int maxi=INT_MIN, int mini=INT_MAX) {
        if(!root) return(maxi-mini);
        maxi=max(maxi, root->val);
        mini=min(mini, root->val);
        return max(maxAncestorDiff(root->left, maxi, mini), maxAncestorDiff(root->right, maxi, mini));
    }
};
