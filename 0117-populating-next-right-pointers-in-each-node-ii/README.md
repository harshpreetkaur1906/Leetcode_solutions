117. Populating Next Right Pointers in Each Node II
Intuition

Unlike Problem 116, the tree is not necessarily perfect. We need to connect all nodes at the same level while handling missing children.

Approach
Traverse the tree level by level.
Maintain a pointer representing the beginning of the next level.
Connect available children using a temporary linked list.
Move to the next level and repeat.
Time Complexity

O(n) — Each node is visited once.

Space Complexity

O(1) — Only constant extra pointers are used.
