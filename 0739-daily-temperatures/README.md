0739. Daily Temperatures
     
Intuition

For every day's temperature, we need to determine how many days must pass before a warmer temperature appears. Comparing every temperature with all future temperatures would be inefficient. Instead, I used a monotonic stack to keep track of indices whose next warmer day has not yet been found. Whenever a warmer temperature is encountered, the required waiting days can be calculated immediately.

Approach

Create an answer vector initialized with zeros.

Use a stack to store the indices of temperatures.

Traverse the temperature array from left to right.

While the current temperature is greater than the temperature at the index on the top of the stack:

Remove the index from the stack.

Calculate the difference between the current index and the removed index.

Store the result in the answer vector.

Push the current index onto the stack.

Continue until all temperatures have been processed.

Return the final answer vector.

Time Complexity

O(n), where n is the number of temperatures. Each index is pushed and popped from the stack at most once.

Space Complexity

O(n), due to the stack used for storing indices.
