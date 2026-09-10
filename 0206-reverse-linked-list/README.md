206. Reverse Linked List

Intuition

To reverse a linked list, every node's next pointer needs to point to the previous node instead of the next node.

Approach

Use three pointers:

prev — previous node
curr — current node
next — temporarily stores the next node

For each node:

Save the next node.
Reverse the current node's pointer.
Move prev and curr forward.

At the end, prev becomes the new head.

Time Complexity

O(n) — Every node is visited once.

Space Complexity

O(1) — Only a few pointers are used.
