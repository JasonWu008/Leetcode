/*
 * @lc app=leetcode.cn id=15 lang=javascript
 *
 * [15] 三数之和
 */
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    var result = [];
    if(nums.length < 3) return result;

    nums.sort((a,b) => a - b);
    for(var i = 0; i < nums.length - 2; i++){
        if((i == 0)||(i > 0 && nums[i] != nums[i-1])){
            var start = i + 1, end = nums.length - 1;
            while(start < end){
                var temp =  nums[i] + nums[start] + nums[end];
                if(temp == 0){
                    var res = new Array(nums[i],nums[start],nums[end]);
                    result.push(res);
                    while(start + 1 < end && nums[start+1] == nums[start]) start++;
                    while(end - 1 > start && nums[end-1] == nums[end]) end--;
                    start++;
                    end--;
                }else if(temp < 0){
                    start++;
                }else{
                    end--;
                }
            }
        }  
    }
    return result;
};

