Longest Substring Without Repeating Characters

1. Intuition

The objective is to find the longest substring that contains only unique characters. Instead of checking every possible substring, I used the sliding window technique. By maintaining a window of unique characters and adjusting it whenever a duplicate is found, the solution becomes much more efficient.

2. Approach
   
-Initialize two pointers to represent the current window.
-Use a hash map to store the last occurrence of each character.
-Traverse the string using the right pointer.
-If the current character is already present within the current window, move the left pointer to the position after its previous occurrence.
-Update the last occurrence of the current character.
-Calculate the current window length and update the maximum length whenever a longer substring is found.
-Continue until the entire string has been processed.

3. Time Complexity

O(n), where n is the length of the string, since each character is visited at most once.

4. Space Complexity

O(min(n, m)), where m is the size of the character set, because the hash map stores the characters present in the current window.
