LeetCode Problem 232 — Implement Queue using Stacks
Intuition

A queue follows FIFO:

First In, First Out

A stack, however, follows LIFO:

Last In, First Out

To make stacks behave like a queue, we can use two stacks:

input stack → used when adding elements
output stack → used when removing or viewing the front element

When the output stack is empty, transfer all elements from the input stack to the output stack.

This reverses their order.

For example, if elements are inserted as:

1 → 2 → 3

Input stack contains:

[1, 2, 3]

After transferring them to the output stack, the order becomes:

[3, 2, 1]

Now 1, the first inserted element, is on top and can be removed first.

Approach
Push

Simply insert the new element into the input stack.

Pop
If the output stack is empty, transfer all elements from the input stack to the output stack.
Remove the top element from the output stack.
Peek
If the output stack is empty, transfer elements from the input stack.
Return the top element of the output stack without removing it.
Empty

The queue is empty only when both stacks are empty.

Time Complexity
Push: O(1)
Pop: O(1) amortized
Peek: O(1) amortized
Empty: O(1)

Although transferring elements can take O(n), each element is transferred at most once from one stack to the other, giving an amortized O(1) complexity per operation.

Space Complexity

O(n)

The two stacks together can contain all n elements.
