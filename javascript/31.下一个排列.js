/*
 * @lc app=leetcode.cn id=31 lang=javascript
 *
 * [31] 下一个排列
 */
/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var nextPermutation = function(nums) {
    var i = nums.length - 1, 
    while(i > 0 && nums[i] < nums[i-1]){
        i--;
    }
    var j = nums.length -1;
    while(j >= 0 && nums[j] < nums[j-1]) j--;
    swap(i-1,j);
    reverse(i,nums.length - 1);

    var swap = function(i,j){
        var temp = nums[i];
        nums[j] = nums[i];
        nums[i] = temp;
    }
    
    var reverse = function(i,j){
        var start = i, end = j;
        while(start < end){
            swap(start,end);
            start++;
            end--;
        }
    }
};

