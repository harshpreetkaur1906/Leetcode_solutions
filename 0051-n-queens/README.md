🧠 Intuition

The problem is to place n queens on an n × n chessboard such that no two queens attack each other.

Two queens cannot be placed in the same:

Row
Column
Diagonal

We can use Backtracking to try placing a queen row by row. If a placement is invalid, we undo it and try another position.

🔍 Approach
Start from the first row.
Try placing a queen in each column.
Check whether the position is safe.
If safe, place the queen and move to the next row.
If no valid position is available, backtrack to the previous row.
When all n queens are placed, store the solution.
⏱️ Time Complexity

O(N!) approximately, as we explore different possible queen placements.

💾 Space Complexity

O(N²) for storing the chessboard and solutions, excluding the output space.

📌 Key Takeaway

Backtracking systematically explores possible arrangements and removes invalid choices as soon as they are detected.
