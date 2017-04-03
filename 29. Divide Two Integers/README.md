# 29. Divide Two Integers
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 24.88%

## Summary
### Bit Operation

每次把除数通过左移增2，记录增加的次数计入counter，不断循环计数，数出dividend里面包含多少个divisor，直到余数小于divisor。

### Tips

1. 用long long，否则会造成大的数字计算不了