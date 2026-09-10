🧠 Intuition

The goal is to calculate x raised to the power n.

A simple approach would multiply x by itself n times, but that would take O(n) time.

To make it more efficient, we use Binary Exponentiation (Fast Power). The main idea is to repeatedly divide the exponent by 2.

If the exponent is even, we can square the base and halve the exponent.
If the exponent is odd, we multiply the result by the current base and then continue.
If the exponent is negative, we calculate the power using the reciprocal of the base.

This reduces the number of operations significantly.

🔍 Approach
Handle the case where the exponent is negative by taking the reciprocal of the base.
Start with a result of 1.
While the exponent is greater than 0:
If the exponent is odd, multiply the result by the current base.
Square the current base.
Divide the exponent by 2.
Return the final result.
⏱️ Time Complexity

O(log n)

The exponent is divided by 2 after every iteration, so the number of iterations is logarithmic.

💾 Space Complexity

O(1)

Only a constant amount of extra space is used.

📌 Key Takeaway

Binary Exponentiation reduces the time required to calculate powers from O(n) to O(log n) by repeatedly squaring the base and halving the exponent.
