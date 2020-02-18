/*
 * @lc app=leetcode.cn id=139 lang=javascript
 *
 * [139] 单词拆分
 */

// @lc code=start
/**
 * @param {string} s
 * @param {string[]} wordDict
 * @return {boolean}
 */
var wordBreak = function(s, wordDict) {
  var len = s.length;
  var dp = new Array(len + 1);
  dp.fill(false);
  dp[0] = true;
  for (let i = 1; i < len + 1; i++) {
      for (let j = 0; j < i; j++) {
          if (dp[j] && wordDict.indexOf(s.slice(j,i)) !== -1) {
              dp[i] = true;
          }
      }
  }
  return dp[len];
};
// @lc code=end

