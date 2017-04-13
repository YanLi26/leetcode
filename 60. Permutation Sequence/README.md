# 60. Permutation Sequence 
## Difficulty for me

Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 62.92%

## Summary
### permutation

全排序的问题。解决思想为排列组合，第一位可以从小到大排列n个数字，第二位从剩下的数字里从小到大排列n-1个数字，以此类推。因为最多只有9个数字，因为先将这9个数字存入数组，num记录现在位有的排列总数，总数为从现在位到最后一位全排列除以现在位能排的数字数。比如有9个数字，第一位每个数字出现的次数为8!。每次算出是第几个数字，从tmp中取出这位的数字，再删除这个数字，接着循环下一位。

### Tips

