/*
 * @lc app=leetcode.cn id=55 lang=javascript
 *
 * [55] 跳跃游戏
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
  var len = nums.length;
  var dp = new Array(len);
  for(let i = 0; i < len; i++) {
    dp[i] = false;
  }
  dp[len-1] = true;
  for (let i = (len - 2); i >= 0; i--) {
    if (nums[i] >= len - i - 1) {
      dp[i] = true;
    }
    for(let j = i; j < (len - 1); j++) {
      if (i + nums[i] >= j && dp[j]) {
        dp[i] = true;
      }
    }
  }
  return dp[0]
};
// @lc code=end

