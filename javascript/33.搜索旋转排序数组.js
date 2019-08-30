/*
 * @lc app=leetcode.cn id=33 lang=javascript
 *
 * [33] 搜索旋转排序数组
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    var left = 0, right = nums.length - 1;
    while(left <= right){
        var mid = parseInt((left + right) / 2);
        if(nums[mid] == target) return mid;

        if(nums[mid] >= nums[left]){
            if(nums[mid] > target && nums[left] <= target) right = mid - 1; 
            else left = mid + 1;
        }else{
            if(nums[mid] < target && nums[right] >= target) left = mid + 1;
            else right = mid - 1; 
        }
    }
    return -1;
};

