# 76. Minimum Window Substring
## Difficulty for me

Hard

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 34.84%

## Summary
### match

匹配的问题，题目让求出一个string中包含另一个string的最小字符串，试了一个一个循环，结果runtime error。用map存放t的元素，pos存放t元素在s中的位置。关键点在于如何求出最小长度，做法为每次只改变一位，就是比较t.size()位，然后去掉第一位，加上后面和第一位相同的元素，再比较长度，避免重复计算。

### Tips

