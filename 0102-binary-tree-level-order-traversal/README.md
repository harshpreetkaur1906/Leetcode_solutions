 102. Binary Tree Level Order Traversal

 1. Intuition

The problem requires traversing the binary tree level by level from top to bottom. Since all nodes at the same level need to be processed before moving to the next level, I chose the Breadth First Search (BFS) approach. Using a queue makes it easy to maintain the order of traversal.

 2. Approach

- Check whether the tree is empty.
- Create a queue and insert the root node.
- Process the tree one level at a time.
- For each level, determine the number of nodes currently present in the queue.
- Store the values of all nodes at that level in a temporary vector.
- Push the left and right child of every node into the queue if they exist.
- Add the temporary vector to the final answer.
- Return the resulting vector after all levels have been processed.

 Time Complexity

O(n), where **n** is the number of nodes in the tree.

Space Complexity

O(n) due to the queue used during traversal.
