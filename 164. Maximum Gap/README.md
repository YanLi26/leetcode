# 164. Maximum Gap
## Difficulty for me
Hard

## Complexity
time complexity = O(n)

space complexity = O(n)

runtime: beat 80.78%

## Summary
### Bucket Sort

这道题要求用线性解，先做了个非线性的，easy题。线性用bucket sort，不能放在一个bucket里，否则会占用过多的空间。正确的做法是，先求出最大值和最小值，然后将这个范围平分为nums.size()份，求出每个bucket的大小，继而求出bucket的数量。划分以后最大的gap不可能在同一个bucket里面，因此按照bucket的序号存入每个bucket中的最大值和最小值。再循环求出后面bucket的最小值减去前面第一个非空bucket的最大值中的最的值即为最大的gap。

### Tips

