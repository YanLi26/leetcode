# 33. Search in Rotated Sorted Array
## Difficulty for me
Medium

## Complexity
time complexity = O(n)

space complexity = O(1)

runtime: beat 15.69%

## Summary
### Binary Search

二分查找的题，首先先分为三个判定条件：第一，中间数与右侧数的关系；第二，中间数和目标数的关系；第三，左／右侧数与目标数的关系。
<!--右侧递减范围-->
中间数<右侧数
    <!--右侧递减范围 或 左侧递增范围-->
    中间数<目标数
        <!--右侧递减范围-->
        右侧数>=目标数
        <!--左侧递增范围-->
        右侧数<目标数
    <!--中间数以左的右侧递减范围-->
    中间数>目标数
<!--左侧递增范围-->
中间数>=右侧数
    <!--中间数左边的左侧递增范围 或 右侧递减范围-->
    中间数>目标数
        <!--中间数左边的左侧递增范围-->
        左侧数<=目标数
        <!--右侧递减范围-->
        左侧数>目标数
    <!--中间数右侧的递增范围-->
    中间数<目标数

最后合并同变化的类别，比如都为right = mid - 1; 最终形成代码

```C++
if(nums[mid] < nums[right]){
    if(nums[mid] < target && nums[right] >= target) left = mid + 1;
    else right = mid - 1;
}
else{
    if(nums[mid] > target && nums[left] <= target) right = mid - 1;
    else left = mid + 1;
}
```

### Tips

1. 第一层不能判定左侧数，因为有可能为正常升序
2. 列出树状结构方便计算