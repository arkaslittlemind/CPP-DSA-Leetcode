Question Link- https://leetcode.com/problems/maximum-depth-of-binary-tree/
  
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
    int maxDepth(TreeNode* root) {
         if(!root) return 0;
        int v1 = maxDepth(root->left);
        int v2 = maxDepth(root->right);
        return 1 + max(v1,v2);
    }
};
