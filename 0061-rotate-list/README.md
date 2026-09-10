LeetCode 61 — Rotate List
🧠 Intuition

The task is to rotate a linked list to the right by k positions.

Instead of moving nodes one by one, we can first connect the last node to the first node, making the list circular.

Then, by finding the new tail and breaking the circular connection, we can perform the rotation efficiently.

🔍 Approach
Handle the cases where the list is empty, has one node, or k is zero.
Find the length of the linked list.
Reduce k using k % length because rotating by the list length produces the same list.
Connect the last node to the head to form a circular list.
Find the new tail after rotation.
Make the node after the new tail the new head.
Break the circular connection.
⏱️ Time Complexity

O(N)

The list is traversed a constant number of times.

💾 Space Complexity

O(1)

No extra data structure is required.

📌 Key Takeaway

Making the linked list circular allows the rotation to be performed efficiently without moving each node individually.
