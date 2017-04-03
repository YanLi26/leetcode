# 23. Merge k Sorted Lists
## Difficulty for me
Medium

## Complexity
time complexity = O($n^2$)

space complexity = O(1)

runtime: beat 28.99%

## Summary
### Linked List

合并k个链表拆分成合并2个链表的问题，每次合并第一个链表和后面的某一个链表，最终输出第一个链表。

### Tips

1. 新建一个链表每次插入node减少判定