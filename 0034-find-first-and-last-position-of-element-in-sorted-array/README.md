Find First and Last Position of Element in Sorted Array

1. Intuition

Since the array is sorted, binary search can be used to efficiently locate the first and last occurrence of the target element instead of scanning the entire array.

2. Approach
   
Perform one binary search to find the first occurrence of the target.

Perform another binary search to find the last occurrence.

If the target is not present, return {-1, -1}.

Otherwise, return both indices.

Time Complexity

O(log n), since binary search is performed twice.

Space Complexity

O(1), as no additional space is required.
