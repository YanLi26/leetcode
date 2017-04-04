# 30. Substring with Concatenation of All Words
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 59.31%

## Summary
### match

字符串匹配问题，刚开始看成每个字符串长度不一样，后面发现字符串长度一样就简单多了。主要思想为用2个hash map，其中一个存放所有string极其数目，另一个是其的copy，每次从string的copy里减去substr的数目，如果小于0则不匹配，如果都不小于0则push_back。

### Tips

1. s.sustr(position, length);