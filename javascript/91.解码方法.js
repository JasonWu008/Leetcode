/*
 * @lc app=leetcode.cn id=91 lang=javascript
 *
 * [91] 解码方法
 */

// @lc code=start
/**
 * @param {string} s
 * @return {number}
 */
var numDecodings = function(s) {
    var len = s.length;
    if (len === 0 || s.charAt(0) === '0') return 0
    var dp = new Array(len + 1);
    dp[0] = 1;
    for (let i = 1; i < len + 1; ++i) {
      dp[i] = 0;
      if (s.charAt(i-1) !== '0') {
        dp[i] += dp[i-1];
      }
      if (i > 1 && (s.charAt(i-2) === '1' || (s.charAt(i-2) === '2' && s.charAt(i-1) <= '6'))) {
        dp[i] += dp[i-2];
      } 
    }
  return dp[len];
};
// @lc code=end

