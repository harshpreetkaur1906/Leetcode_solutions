1588. Sum of All Odd Length Subarrays
      
 Intuition

The problem asks for the sum of all odd-length subarrays. Instead of generating every possible subarray, I observed that each element contributes to multiple odd-length subarrays. By calculating how many odd-length subarrays include each element, the final answer can be obtained efficiently.

 Approach
 
Traverse every element of the array.

For each element, calculate the number of possible starting positions.

Calculate the number of possible ending positions.

Determine the total number of subarrays containing the current element.

Find how many of these subarrays have odd length.

Multiply the element by its contribution count.

Add the contribution to the final answer.

Return the computed sum.

Time Complexity

O(n), where n is the size of the array.

Space Complexity

O(1), since only a few extra variables are used.
