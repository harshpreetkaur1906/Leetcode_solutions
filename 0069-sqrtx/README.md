LeetCode 69 — Sqrt(x)
🧠 Intuition

The problem is to find the integer square root of a non-negative number x.

We need the largest integer n such that:

n × n ≤ x

Since the possible answers are sorted, we can use Binary Search instead of checking every number.

🔍 Approach
Set the search range from 1 to x.
Find the middle value.
Check whether mid × mid is less than, equal to, or greater than x.
If mid × mid == x, return mid.
If mid × mid < x, search for a larger value.
Otherwise, search for a smaller value.
Return the largest valid value.
⏱️ Time Complexity

O(log x)

Binary Search reduces the search range by half in every iteration.

💾 Space Complexity

O(1)

Only a few variables are used.

📌 Key Takeaway

Binary Search efficiently finds the largest integer whose square is less than or equal to x.
