Question Link- https://leetcode.com/problems/convert-bst-to-greater-tree/

class Solution {
public:
    
    void solve(TreeNode *root, int &num)
    {
		// Base Condition
        if(root == NULL)
            return;
		// Solve for RST first.
        solve(root->right, num);
		// Assigning sum of RST to root.
        root->val = num + root->val;
		// Maintaining sum of RST.
        num = root->val;
		// Once done with RST go to LST.
        solve(root->left, num);
    }
    
    TreeNode* convertBST(TreeNode* root) 
    {
		// keeps sum of RightSubTree of current Node.
        int num = 0;
        solve(root, num);
        return root;
    }
};
