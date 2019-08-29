/*
 * @lc app=leetcode.cn id=18 lang=javascript
 *
 * [18] 四数之和
 */
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
var fourSum = function(nums, target) {
    var result = [];
    if(nums.length < 4) return result;

    nums.sort((a,b) => a - b); 
    for(var i = 0; i < nums.length - 3; i++){
        var temp1 = target - nums[i];
        for(var j = i + 1; j < nums.length - 2; j++){
            var temp2 = temp1 - nums[j];
            var start = j + 1, end = nums.length - 1;
            while(start < end){
                var temp3 = nums[start] + nums[end];
                if(temp3 == temp2){
                    var res = new Array(nums[i],nums[j],nums[start],nums[end]);
                    result.push(res);
                    while(start + 1 < end && nums[start] == nums[start+1]) start++;
                    while(end - 1 > start && nums[end-1] == nums[end]) end--;
                    start++;
                    end--;
                }else if(temp3 < temp2){
                    start++;
                }else{
                    end--;
                }
            }
            while(j + 1 < nums.length && nums[j+1] == nums[j]) j++;
        }
        while(i + 1 < nums.length - 3 && nums[i+1] == nums[i]) i++;
    }
    return result;
}
