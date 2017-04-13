# 65. Valid Number
## Difficulty for me

Hard

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 21.59%

## Summary
### match

匹配的问题，难点在于对所有情况的考虑，先列出所有可能的情况。

1. 空格：开头结尾空格删去，中间如果出现空格false。
2. '.'：小数点可以出现在任何位置，但是前面或者后面必须有数字，且不能出现在e/E的后面，最多只能出现一次。
3. 'e/E'：不能出现在开头或者结尾，前后必须有数字，且只能出现一次。
4. '+/-'：在开头或者e后面出现，后面必须有数字。
5. 如果不为数字或者以上字符，则false。

### Tips

1. 对情况复杂的题目先列出所有的情况。