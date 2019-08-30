/*
 * @lc app=leetcode.cn id=34 lang=javascript
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    var left = 0, right = nums.length - 1;
    while(left <= right){
        var mid = parseInt((left + right) / 2);
        if(nums[mid] == target){
            var i = mid, j = mid;
            while(nums[i-1] == target) i--;
            while(nums[j+1] == target) j++;
            return new Array(i,j); 
        }else if(nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return new Array(-1,-1);
};

