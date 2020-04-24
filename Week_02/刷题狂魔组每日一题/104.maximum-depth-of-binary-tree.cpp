/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    使用DFS(深度优先搜索)
    */
   /*
    int dfs(TreeNode *root, int maxDept)
    {
        if (!root)
        {
            return maxDept;
        }

        int leftDepth = dfs(root->left, maxDept + 1);
        int rightDepth = dfs(root->right, maxDept + 1);

        return max(leftDepth, rightDepth);
    }
    int maxDepth(TreeNode* root) {
        int maxDept = 0;
        return  dfs(root, maxDept);
    }*/

     /*
    使用BFS(广度优先搜索)
    */
    int maxDepth(TreeNode* root) {
        int max_depth = 0;
        if (!root)
        {
            return max_depth;
        }
        
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while(!q.empty())
        {
            TreeNode *cur_node = q.front().first;
            int cur_depth = q.front().second;
            q.pop();
            if (cur_node)
            {
                max_depth = max(cur_depth, max_depth);
                q.push({cur_node->left, cur_depth + 1});
                q.push({cur_node->right, cur_depth + 1});
            }
        }

        return max_depth;
    }
};
// @lc code=end

