/*
 * @lc app=leetcode.cn id=16 lang=javascript
 *
 * [16] 最接近的三数之和
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    var result = nums[0] + nums[1] + nums[nums.length-1];
    nums.sort((a, b) => a - b);
    for(var i = 0; i < nums.length - 2; i++){
        var start = i + 1, end = nums.length - 1;
        while(start < end){
            var temp = nums[start] + nums[end] + nums[i];
            if(Math.abs(temp - target) < Math.abs(result - target)){
                result = temp;
            }

            if(temp < target){
                start++; 
            }else{
                end--;
            }
        } 
    }
    return result;
};

