LeetCode 70 — Climbing Stairs
🧠 Intuition

To reach the top of a staircase, we can take either 1 step or 2 steps at a time.

For any step n, there are only two possibilities for the last move:

Reach it from step n - 1 using 1 step.
Reach it from step n - 2 using 2 steps.

Therefore:

ways(n) = ways(n - 1) + ways(n - 2)

This follows the Fibonacci sequence pattern.

🔍 Approach
Handle the base cases.
Keep track of the number of ways to reach the previous two steps.
Calculate the number of ways for the current step by adding the previous two values.
Continue until reaching the nth step.
Return the number of ways.
⏱️ Time Complexity

O(N)

We calculate each step only once.

💾 Space Complexity

O(1)

Only the previous two results are stored.

📌 Key Takeaway

The problem follows the Fibonacci pattern because every step can be reached from either one step below or two steps below.
