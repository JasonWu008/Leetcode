/*
 * @lc app=leetcode.cn id=27 lang=javascript
 *
 * [27] 移除元素
 */
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    if(nums.length == 0) return 0;
    var i = 0, j = 0;
    while(j < nums.length){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
    
};

