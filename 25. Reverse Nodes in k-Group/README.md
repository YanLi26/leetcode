# 25. Reverse Nodes in k-Group
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 71.24%

## Summary
### 

可以拆成function做reverse。不拆成function的时候，pre为每次k循环的第一个node前面的node，last为循环k个node，不断把node插入pre前面，插入k次。具体做法为先用指针tmp指向循环中一开始的第一个node（last指针指向）后面的node，将这个node通过指针变化删除，然后将其插入k循环最前面，然后pre指向这个node。

### Tips

