/*
 * @lc app=leetcode.cn id=39 lang=javascript
 *
 * [39] 组合总和
 */
/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    var result = [], path = [];
    candidates.sort((a,b) => a - b);
    DFS(0,target);
    return result;

    function DFS(start,target){
        if(target == 0){
            result.push(path);
            return;
        }

        for(var i = start; i < candidates.length && target - candidates[i] >= 0; i++){
            path.push(candidates[i]);
            DFS(i, target - candidates[i]);
            path.pop(); 
        }
    }
};

