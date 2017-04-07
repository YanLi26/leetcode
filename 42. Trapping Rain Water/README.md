# 42. Trapping Rain Water
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(n)

runtime: beat 35.43%

## Summary
### dp

算是dp的问题。找到每一个bar左右最高的bar中小的bar，减去原bar的高度即为储水量。先用water数组存储每一个bar左边最大值，即对比每个bar高度和它前一个bar左边最高bar的高度，存储高的。然后用同样的方式从右向左找到右边最高的bar，将其与左边最高bar对比，找到短的，减去这个位置上bar的高度。

### Tips

