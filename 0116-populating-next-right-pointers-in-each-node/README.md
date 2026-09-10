116. Populating Next Right Pointers in Each Node
Intuition

Nodes at the same level need to be connected using their next pointer. Because the tree is perfect, every node has two children, making level-by-level connections straightforward.

Approach
Process the tree level by level.
Connect the left child to the right child.
Connect the right child to the next node's left child.
Move to the next level and repeat.
Time Complexity

O(n) — Every node is processed once.

Space Complexity

O(1) — No additional queue is required.
