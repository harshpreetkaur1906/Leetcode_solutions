199. Binary Tree Right Side View
Intuition

From the right side of a binary tree, we can see only the rightmost node of each level.

Approach
Perform BFS level by level.
For every level, identify the last node processed.
Add that node to the result.
Continue until all levels are processed.
Time Complexity

O(n) — Every node is visited once.

Space Complexity

O(n) — Queue can contain nodes from a level.
