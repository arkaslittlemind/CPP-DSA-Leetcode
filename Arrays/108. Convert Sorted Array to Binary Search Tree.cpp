Question Link- https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

//Recursive Approach//

class Solution {
public:
    
    TreeNode* solve(vector<int>& nums, int l, int r){
        
        if (l>r) // check if left pointer crooses right pointer
            return NULL;
        
        int mid = l + (r-l)/2;
        
        TreeNode* tree = new TreeNode(nums[mid]); // creating a new tree with mid as its val
        tree->left = solve(nums, l, mid-1);
        tree->right = solve(nums, mid+1, r);
        
        return tree;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return solve(nums, 0, nums.size()-1);
    }
};
