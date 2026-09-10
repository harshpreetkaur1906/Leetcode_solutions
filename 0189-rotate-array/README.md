189. Rotate Array
Intuition

Rotating an array by k positions can be achieved efficiently by reversing different portions of the array.

Approach
First reverse the entire array.
Reverse the first k elements.
Reverse the remaining elements.
This places every element in its rotated position.
Time Complexity

O(n) — Each element is involved in a constant number of reversals.

Space Complexity

O(1) — Rotation is performed in-place.
