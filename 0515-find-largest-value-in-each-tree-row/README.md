0515. Find Largest Value in Each Tree Row
1. Intuition

The problem asks us to find the largest value present at every level of a binary tree. Since the nodes need to be processed level by level, I used Breadth First Search (BFS). While traversing each level, I kept track of the maximum value encountered. Once the entire level was processed, I stored the maximum value in the result vector before moving to the next level.

2. Approach
Check if the binary tree is empty. If it is, return an empty vector.

Create a queue and insert the root node.

Traverse the tree level by level using BFS.

For each level, initialize a variable to store the maximum value.

Process all nodes of the current level and update the maximum whenever a larger value is found.

Insert the left and right children of every node into the queue.

After processing the entire level, store the maximum value in the answer vector.

Continue until all levels have been processed.

Return the final vector containing the largest value from each row.

Time Complexity

O(n), where n is the total number of nodes in the tree. Every node is visited exactly once.

Space Complexity

O(n), because the queue may contain all nodes of the largest level.
