/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    /*
    递归解法
    */
    /*vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        PreOrder(root, ret);

        return ret;
    }

     void PreOrder(TreeNode* root, vector<int> &vec)
    {
        if(root == nullptr) 
            return;
        
        vec.push_back(root->val);
        PreOrder(root->left, vec);
        PreOrder(root->right, vec);
    }*/

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root, *pre;
        while(curr) 
        {
            if(curr->left == nullptr) 
            {
                ans.push_back(curr->val);
                curr = curr->right; 
            }
            else 
            {
                pre = curr->left;
                while(pre->right && pre->right != curr) 
                {
                    pre = pre->right;
                }

                if (pre->right == nullptr)
                {
                    pre->right = curr;
                    ans.push_back(curr->val);
                    curr = curr->left;
                }
                else
                {
                    pre->right = nullptr;
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

