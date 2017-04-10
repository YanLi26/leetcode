# 45. Jump Game II

ref: http://www.cnblogs.com/lichen782/p/leetcode_Jump_Game_II.html

## Difficulty for me

Hard

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 73.48%

## Summary
### Dynamic Programming

用curr记录现在能达到的最远距离，last记录已确定覆盖的地方。循环数组，如果当前位超出覆盖的位置last，说明在last前last为最少步到达的最远距离，步数加一，更新last。更新curr，对比curr和现在i到达的最远距离。

### Tips

