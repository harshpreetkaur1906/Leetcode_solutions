155. Min Stack
Intuition

A normal stack can retrieve the top element in constant time, but finding the minimum would normally require scanning the stack. We need an additional way to keep track of the minimum.

Approach
Maintain the main stack for all values.
Maintain another stack containing the minimum value at each level.
When pushing, update the minimum stack.
When popping, remove the corresponding minimum.
The top of the minimum stack always gives the current minimum.
Time Complexity

O(1) — Push, pop, top, and minimum operations are constant time.

Space Complexity

O(n) — Additional stack storage is required.
