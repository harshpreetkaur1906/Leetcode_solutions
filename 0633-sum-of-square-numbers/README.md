0633. Sum of Square Numbers
     
Intuition

The objective is to determine whether a given integer can be represented as the sum of the squares of two integers. Instead of checking every possible pair, I used the two-pointer technique. Since the square values increase with larger numbers, moving the pointers based on the current sum helps eliminate unnecessary calculations and makes the solution much more efficient.

 Approach
 
Initialize one pointer at 0.

Initialize another pointer at the square root of the given number.

Calculate the sum of the squares of both pointers.

If the sum is equal to the given number, return true.

If the sum is smaller than the required value, move the left pointer forward.

If the sum is greater, move the right pointer backward.

Continue until both pointers cross each other.

If no valid pair is found, return false.

Time Complexity

O(√c), where c is the given number.

Space Complexity

O(1), since only a few variables are used.
