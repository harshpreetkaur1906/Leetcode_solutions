107. Binary Tree Level Order Traversal II
Intuition

The problem is similar to normal level-order traversal, but the levels need to be returned from bottom to top. We can perform a normal BFS traversal and then reverse the resulting list of levels.

Approach
Use a queue to perform Breadth-First Search (BFS).
Process all nodes belonging to the same level together.
Store each level in the result.
Reverse the result at the end.
Time Complexity

O(n) — Every node is visited once.

Space Complexity

O(n) — Queue and result storage may contain all nodes.
