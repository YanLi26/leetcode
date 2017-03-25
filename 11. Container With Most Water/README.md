# 11. Container With Most Water
## Difficulty for me
Medium

## Complexity
time complexity = O(n/2)

space complexity = O(1)

runtime: beat 47.25%

## Summary
### left, right
两个指针left, right，比较两个形成的水槽面积，然后把高度较小的指针移向中间（因为，高度较小的移向中间才又可能取到更大的值）。

### Tips
1.将高度较小的移向中间
