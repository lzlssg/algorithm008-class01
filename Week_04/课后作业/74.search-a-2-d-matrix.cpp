/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int row = matrix.size();
        int col = matrix[0].size();
        //二分查找行数
        int up = 0;
        int down = row - 1;
        while(up < down) {
            int mid = up + (down - up) / 2;
            if(matrix[mid][col-1] < target) {  //这一行的最后一个值比target还要小，收缩上边界
                //下一轮搜索范围[mid + 1， down]
                up = mid + 1;
            } else {
                down = mid;
            }
        }
        //二分查找所在列
        int left = 0;
        int right = col - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(matrix[up][mid] < target) { //mid<target，收缩左边界
                //下一轮搜索范围[mid+1,right]
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if(matrix[up][left] == target) {
            return true;
        }
        return false;
    }
};
// @lc code=end

