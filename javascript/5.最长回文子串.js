/*
 * @lc app=leetcode.cn id=5 lang=javascript
 *
 * [5] 最长回文子串
 */

// @lc code=start
/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
  var max = 1;
  var start = 0;
  var len = s.length;
  var dp = new Array(len);
  for (let i = 0; i < len; i++) {
    dp[i] = new Array(len);
  }
  for (let i = 0; i < len; i++) {
    for(let j = 0; j <= i; j++) {
      if ((i - j) < 2) {
        dp[j][i] = (s.charAt(i) === s.charAt(j));
      }
      else {
        dp[j][i] = (dp[j+1][i-1] && (s.charAt(i) === s.charAt(j)))
      }
      if(dp[j][i] && (i - j + 1) > max) {
        max = i - j + 1;
        start = j
      }
    }
  }
  return s.slice(start, (start + max))  
};
// @lc code=end

