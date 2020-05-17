/*
 * @lc app=leetcode id=874 lang=cpp
 *
 * [874] Walking Robot Simulation
 */

// @lc code=start
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obstacles_set;
        int x = 0, y = 0, cur = 0, ans = 0;
        for(int i = 0; i < obstacles.size(); i++){
            string s = to_string(obstacles[i][0]) + " " + to_string(obstacles[i][1]);
            obstacles_set.insert(s);
        }
        //定义了4个方向
        vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for(int cmd: commands){
            if(cmd == -2) cur = (cur + 3) % 4;
            else  if(cmd == -1) cur = (cur + 1) % 4;
            else{
                for(int k = 0; k < cmd; k++){
                    int nx = x + dirs[cur][0];
                    int ny = y + dirs[cur][1];
                    string tmp = to_string(nx) + " "+ to_string(ny);
                    if(obstacles_set.find(tmp) == obstacles_set.end()){
                        x = nx;
                        y = ny;
                        ans = max(ans, x*x + y*y);
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

