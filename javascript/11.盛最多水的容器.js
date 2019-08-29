/*
 * @lc app=leetcode.cn id=11 lang=javascript
 *
 * [11] 盛最多水的容器
 */
/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    var start = 0, end = height.length - 1;
    var result = 0;
    while(start < end){
        if(height[start] < height[end]){
            var temp = (end - start) * height[start];
            start++;
        }else{
            var temp = (end - start) * height[end];
            end--;
        }
        
        if(temp > result){
            result = temp;
        }
    }
    return result;
};

