/*
 * @lc app=leetcode.cn id=1 lang=javascript
 *
 * [1] 两数之和
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var obj = {};
    for(var i = 0;i < nums.length;i++){
        var temp = target - nums[i];
        if(obj[temp]!=null){
            var results = [];   
            results.push(obj[temp]);
            results.push(i);
            return results;
        }
        else{
            obj[nums[i]] = i;
        }
    }
    
};

