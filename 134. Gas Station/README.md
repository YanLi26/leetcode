# 134. Gas Station
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 31.88%

## Summary
### mathematics
题目本身很简单，但是要想清楚解题思路。如果i位置上以前所有累计的和sum<0，说明前面任何一个点都不能当起点，因为前面任何一个点到起点都为正数，一个负数减去正数还是负数。虽然题目是一个circular route，但是并不用加入环的数据结构或计算方法，因为最后一个cost为最后一位和第一位的cost，因此只要所有数都满足前面条件就可以。total用来记录开始循环的位置一直到最后的sum，如果最后total为负说明不可能形成环让车一直运行。

### Tips
1.注意最后判定total
2.必须分为sum和total进行计算
