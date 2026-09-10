LeetCode Problem 217 — Contains Duplicate

Intuition

The main idea is to determine whether any number appears more than once in the array.

If we keep track of the numbers we have already seen, then whenever we encounter a number that is already present, we immediately know that the array contains a duplicate.

A hash set is ideal for this because it allows us to check whether an element already exists in approximately constant time.

For example:

[1, 2, 3, 1]

See 1 → store it
See 2 → store it
See 3 → store it
See 1 → already present → duplicate found
Approach
Create an empty hash set.
Traverse the array from left to right.
For every element:
Check whether it is already present in the set.
If yes, return true.
Otherwise, insert it into the set.
If the complete array is traversed without finding a duplicate, return false.
Time Complexity

O(n)

Each element is processed once, and hash-set lookup/insertion takes O(1) on average.

Space Complexity

O(n)

In the worst case, all elements are unique and must be stored in the hash set.
