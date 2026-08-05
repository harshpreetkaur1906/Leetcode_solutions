Median of Two Sorted Arrays

1. Intuition

The problem requires finding the median of two sorted arrays without merging them completely. Since merging would take extra time, I used binary search to partition both arrays such that the left half contains the smaller elements and the right half contains the larger elements. Once the correct partition is found, the median can be calculated directly.

2. Approach
   
Always perform binary search on the smaller array.

Partition both arrays so that the total number of elements on the left side is equal to the right side or differs by one.

Check whether the partition is valid by comparing the boundary elements.

If the partition is correct, calculate the median based on the total number of elements.

Otherwise, adjust the binary search range and repeat the process.

3. Time Complexity

O(log(min(n, m))), where n and m are the sizes of the two arrays.

4. Space Complexity

O(1), as no extra space is used.
