1640. Check Array Formation Through Concatenation
Intuition

The problem provides an array and several smaller arrays. The goal is to determine whether the original array can be formed by concatenating these smaller arrays without changing their internal order. A hash map allows quick access to the correct piece based on its first element, making the verification efficient.

 Approach
 
Create a hash map where the first element of every piece is mapped to that piece.

Traverse the given array from left to right.

For each element, check whether it exists as the starting element of any piece.

If it does not exist, return false.

Compare every element of the corresponding piece with the array.

If any mismatch occurs, return false.

Continue until the entire array has been verified.

Return true if all pieces match successfully.

Time Complexity

O(n), where n is the total number of elements in the array.

Space Complexity

O(m), where m is the number of pieces stored in the hash map.
