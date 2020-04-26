/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    /*vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        InOrder(root, ret);

        return ret;
    }

    void InOrder(TreeNode* root, vector<int> &vec)
    {
        if(root == nullptr) 
            return;
        
        InOrder(root->left, vec);
        vec.push_back(root->val);
        InOrder(root->right, vec);
    }*/
    /*
    迭代算法
    */
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> ans;
       TreeNode* curr = root, *pre;
       while(curr) {
           if(!curr->left) {
               ans.push_back(curr->val);
               curr = curr->right; 
           }
           else {
               pre = curr->left;
               while(pre->right) {
                   pre = pre->right;
               }
               pre->right = curr;
               TreeNode* tmp = curr;
               curr = curr->left;
               tmp->left = nullptr;
           }
       }
       return ans;
    }
};
// @lc code=end

