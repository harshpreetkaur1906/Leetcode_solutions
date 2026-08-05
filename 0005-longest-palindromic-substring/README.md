Longest Palindromic Substring

1. Intuition

A palindrome reads the same forwards and backwards. Instead of checking every possible substring, I expanded around each character and every pair of adjacent characters to find the longest palindrome. This approach efficiently checks both odd and even length palindromes.

2. Approach
   
Traverse every character in the string.

Treat each character as the center of an odd-length palindrome.

Treat every pair of adjacent characters as the center of an even-length palindrome.

Expand outward while the characters on both sides are equal.

Keep updating the starting position and maximum length whenever a longer palindrome is found.

Return the longest palindromic substring.

3. Time Complexity

O(n²), where n is the length of the string.

4. Space Complexity

O(1), since only a few variables are used.
