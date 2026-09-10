LeetCode 52 — N-Queens II
🧠 Intuition

This problem is a variation of N-Queens. Instead of returning all possible arrangements, we only need to find the number of valid solutions.

The same backtracking technique can be used to place queens row by row while ensuring that no two queens share the same column or diagonal.

🔍 Approach
Start with the first row.
Try placing a queen in every possible column.
Check whether the position is safe.
If it is safe, move to the next row.
If all queens are successfully placed, increase the solution count.
Backtrack and continue searching for other valid arrangements.
⏱️ Time Complexity

O(N!) approximately.

💾 Space Complexity

O(N) for maintaining the board state, columns, and diagonals.

📌 Key Takeaway

N-Queens II uses backtracking to count all possible valid arrangements without storing the actual boards.
