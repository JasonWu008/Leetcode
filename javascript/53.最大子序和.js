/*
 * @lc app=leetcode.cn id=53 lang=javascript
 *
 * [53] 最大子序和
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
  var maxLocal = nums[0];
  var global = nums[0];
  for (let i = 1; i < nums.length; ++i) {
      maxLocal = Math.max(nums[i], nums[i] + maxLocal);
      global = Math.max(global, maxLocal);
  }
  return global;
};
// @lc code=end

