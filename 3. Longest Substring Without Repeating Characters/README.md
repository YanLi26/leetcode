# 3. Longest Substring Without Repeating Characters
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 66.60%

## Summary
### hash map
用一个256大小的vector代表所有ASCII值，left记录无重复substring开始点，vector存储string中每个字符的位置，不断更新，最后判定结尾字符串

### Tips

1.vector初始化

```C++
 vector<int> map(256,-1);
```

2.left每次要取max

3.不断更新ans
