109. Convert Sorted List to Binary Search Tree
Intuition

The linked list is sorted, so the middle element should become the root to create a balanced BST. Since accessing the middle of a linked list is not direct, we first find the middle using slow and fast pointers.

Approach
Use slow and fast pointers to find the middle node.
Make the middle node the root.
Recursively construct the left subtree from the left portion.
Recursively construct the right subtree from the right portion.
Time Complexity

O(n log n) — Finding the middle at each recursive level takes linear work overall per level.

Space Complexity

O(log n) — Recursion stack for a balanced tree.
