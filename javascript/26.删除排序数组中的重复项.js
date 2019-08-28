/*
 * @lc app=leetcode.cn id=26 lang=javascript
 *
 * [26] 删除排序数组中的重复项
 */
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if((nums.length == 0)||(nums.length == 1)) return nums.length; 
    var i = 0, j = 1;
    while(j < nums.length){
        if(nums[j] != nums[j-1] ){
            i++;
            nums[i] = nums[j];
        }
        j++
    }
    return i+1;
};

