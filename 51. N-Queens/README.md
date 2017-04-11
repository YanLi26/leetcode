# 51. N-Queens
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(n)

runtime: beat 16.56%

## Summary
### DFS

DFS的变形，本来想直接存储string，结果test没过，dubug能力还需要提升。后来看到网上这种处理，题目简化很多。这个DFS有3个循环，一个是每次push的vector，一个是每个vector中的vector/<string/>，最后是string本身。因此用一个int数组存储位置信息，因为每一行每一列只能有一个皇后，因此减少一层循环，每次行数加一。用存储位置的vector存储列信息，每次循环完一种可能的情况push进res中。最后就只剩一层列位置循环，不断搜索。

### Tips

