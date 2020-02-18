/*
 * @lc app=leetcode.cn id=121 lang=javascript
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
  var max = 0;
  var min = Number.MAX_VALUE;
  for (let i = 0; i < prices.length; i++) {
    if (prices[i] < min) {
      min = prices[i];
    }
    else if (prices[i] - min > max) {
      max = prices[i] - min;
    }
  }
    return max;
};
// @lc code=end

