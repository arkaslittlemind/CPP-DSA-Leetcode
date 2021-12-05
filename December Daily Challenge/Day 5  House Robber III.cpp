Question Link- https://leetcode.com/problems/house-robber-iii/

//Depth First Search//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct RobbedRoot {
    int robbedRoot;
    int skippedRoot;
};

class Solution {
private:
    RobbedRoot robDFS(TreeNode* root) {
        if (root == nullptr) {
            return RobbedRoot{0, 0};
        }
        
        RobbedRoot robLeft = robDFS(root->left);
        RobbedRoot robRight = robDFS(root->right);
        
        int robThisNode = root->val + robLeft.skippedRoot + robRight.skippedRoot;
        int skipThisNode = max(robLeft.robbedRoot, robLeft.skippedRoot) + max(robRight.robbedRoot, robRight.skippedRoot);
        
        return RobbedRoot{robThisNode, skipThisNode};
    }
public:
    int rob(TreeNode* root) {
        RobbedRoot finalState = robDFS(root);
        
        return max(finalState.robbedRoot, finalState.skippedRoot);
    }
};
