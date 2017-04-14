# 130. Surrounded Regions
## Difficulty for me

Medium

## Complexity
time complexity = O(max(m,n))

space complexity = O(1)

runtime: beat 41.96%

## Summary
### DFS

这道题是求被围住的O，换个角度，求没有被围住的O，然后剩下的就是被围住的O。因此从matrix四边开始dfs，找出没被围住的O，用1替换，最后将1换为X，1变为O。

### Tips

