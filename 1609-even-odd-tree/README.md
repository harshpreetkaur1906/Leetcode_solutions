1609. Even Odd Tree
      
Intuition

The tree must satisfy two conditions at every level. Even-indexed levels should contain odd values in strictly increasing order, while odd-indexed levels should contain even values in strictly decreasing order. Since these conditions need to be checked level by level, Breadth First Search (BFS) is the most appropriate approach.

Approach

Return true if the tree is empty.

Perform a level order traversal using a queue.

For every level, determine whether it is even or odd.

For even levels:

Ensure every node has an odd value.

Verify that values are strictly increasing.

For odd levels:

Ensure every node has an even value.

Verify that values are strictly decreasing.

If any condition is violated, return false.

If all levels satisfy the conditions, return true.

Time Complexity

O(n), where n is the number of nodes in the tree.

Space Complexity

O(n), because of the queue used during traversal.
