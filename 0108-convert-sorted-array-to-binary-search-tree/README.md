Intuition

A BST is balanced when the middle element is selected as the root. Since the array is already sorted, the middle element naturally divides it into smaller and larger values.

Approach
Select the middle element as the root.
Recursively construct the left subtree using the left half.
Recursively construct the right subtree using the right half.
Continue until the subarray becomes empty.
Time Complexity

O(n) — Every element is used once.

Space Complexity

O(log n) — Recursion stack for a balanced tree.
