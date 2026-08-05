0637. Average of Levels in Binary Tree
     
Intuition

The problem requires calculating the average value of nodes present at every level of the binary tree. Since all nodes of a level must be processed together, Breadth First Search (BFS) is the most suitable approach. By calculating the sum of values at each level and dividing it by the number of nodes, the required averages can be obtained.

Approach

Check whether the tree is empty.

Insert the root node into a queue.

Traverse the binary tree level by level.

For each level, calculate the sum of all node values.

Count the total number of nodes at that level.

Compute the average by dividing the sum by the number of nodes.

Store the average in the answer vector.

Continue until every level has been processed.

Return the final vector containing all averages.

Time Complexity

O(n), where n is the total number of nodes in the tree.

Space Complexity

O(n), due to the queue used for level order traversal.
