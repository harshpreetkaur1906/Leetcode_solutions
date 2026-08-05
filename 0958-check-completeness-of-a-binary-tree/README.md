0958. Check Completeness of a Binary Tree
     
Intuition

A complete binary tree is one where all levels are completely filled except possibly the last level, and all nodes in the last level are as far left as possible. While thinking about the problem, I realized that a level order traversal would help verify this property. During traversal, once a NULL node is encountered, no non-NULL node should appear afterward. If it does, the tree is not complete.

 Approach
 
Check if the tree is empty. If it is, return true.

Create a queue and insert the root node.

Perform a level order traversal.

Push both valid child nodes and NULL nodes into the queue.

Maintain a flag to indicate whether a NULL node has been encountered.

If a NULL node is found, set the flag.

If any non-NULL node appears after the flag has been set, return false.

If the traversal finishes without violating this condition, return true.

Time Complexity

O(n), where n is the number of nodes in the tree.

Space Complexity

O(n), due to the queue used for level order traversal.
