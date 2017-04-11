# 
## Difficulty for me

Medium

## Complexity
time complexity = O()

space complexity = O(1)

runtime: 262ms

## Summary
### BFS

参照solution中java解法。用一个queue存储所有0的位置，将所有1置为INT_MAX。然后循环queue中所有数，如果这个数周边的数比它大，则将周边的数置为这个数加一，再将其push进queue，直到queue空，说明每个数都小于等于周边的数。思想为将每个0看作起点，广搜周边的数字，逐次更新。

### Tips

