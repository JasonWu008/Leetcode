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
    var i = nums.length - 1;
    while(i > 0 && nums[i] <= nums[i-1]){
        i--;
    }
    if(i == 0){
        reverse(0,nums.length-1);
        return;
    }
    var j = nums.length -1;
    while(j >= i && nums[j] <= nums[i-1]) j--;
    swap(i-1,j);
    reverse(i,nums.length - 1);
    return;

    function swap(i,j){
        var temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    function reverse(i,j){
        var start = i, end = j;
        while(start < end){
            swap(start,end);
            start++;
            end--;
        }
    }
};

