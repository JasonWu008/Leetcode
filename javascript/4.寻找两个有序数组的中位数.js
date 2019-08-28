/*
 * @lc app=leetcode.cn id=4 lang=javascript
 *
 * [4] 寻找两个有序数组的中位数
 */
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    var m = nums1.length;
    var n = nums2.length;
    if(m > n){
        var temp = nums1;
        nums1 = nums2;
        nums2 = temp;
        var tmp = m;
        m = n;
        n = tmp;
    }
    var min = 0;
    var max = m;
    halfLen = (m + n + 1)/2;
    while(min < max){
        var i = (min + max)/2;
        var j = halfLen - i;
        if(i < max && nums2[j-1]>nums1[i]){
            min = i + 1;
        }else if(i > min && nums1[i-1]>nums2[j]){
            max = i - 1;
        }else{
            var maxLeft = 0;
            
        }
    }
    
};

