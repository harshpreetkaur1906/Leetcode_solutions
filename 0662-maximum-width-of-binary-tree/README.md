0662. Maximum Width of Binary Tree
     
Intuition

The width of a binary tree depends on the positions of the leftmost and rightmost nodes at every level, including the gaps between them. To calculate this correctly, I assigned an index to every node similar to the indexing used in a complete binary tree. This makes it easy to compute the width of each level using the indices of the first and last nodes.

 Approach
 
Return 0 if the tree is empty.

Create a queue that stores both the node and its corresponding index.

Start by assigning index 0 to the root.

Process the tree level by level.

Store the index of the first and last node at each level.

Calculate the width as (last index - first index + 1).

Update the maximum width whenever a larger value is found.

Assign indices to the left and right children using the complete binary tree indexing method.

Continue until all levels are processed.

Return the maximum width obtained.

Time Complexity

O(n), where n is the number of nodes in the tree.

Space Complexity

O(n), because the queue stores nodes of each level.
