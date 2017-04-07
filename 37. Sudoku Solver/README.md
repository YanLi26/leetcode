# 37. Sudoku Solver
## Difficulty for me
Hard

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 40.54%

## Summary
### DFS

reference: http://www.cnblogs.com/grandyang/p/4421852.html

看了别人的写法，理解一下而已，还是写不出来。首先有一个函数用来check插入的数是否合法。其次有一个dfs的函数用来做搜索。搜索方法为按行列一个一个搜索数字，然后check他们是否正确，不正确就回退，正确继续查询。

### Tips

1. 用两个函数辅助