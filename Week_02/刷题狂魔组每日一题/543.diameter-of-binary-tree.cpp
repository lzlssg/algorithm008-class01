/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int max_heigh = 0;
        height(root, max_heigh);
        return max_heigh;
    }

    int height(TreeNode* root, int& max_heigh)
    {
        if (!root)
        {
            return 0;
        }
        
        int max_left = height(root->left, max_heigh);
        int max_right = height(root->right, max_heigh);
        max_heigh = max(max_heigh, max_left + max_right);

        return 1 + max(max_left, max_right);
    }
};
// @lc code=end

