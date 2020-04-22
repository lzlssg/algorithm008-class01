/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cows
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;
        unordered_map<char, int> ump;
        for (int i = 0; i < secret.size(); ++i) {
            if (secret[i] == guess[i]) ++a;
            ++ump[secret[i]];
        }
        for (int i = 0; i < guess.size(); ++i) {
            if (ump[guess[i]] > 0) {
               ++b;
               --ump[guess[i]];
            } 
        }
        if (a > 0) b -= a;
        return to_string(a) + "A" + to_string(b) + "B";
    }
};
// @lc code=end

