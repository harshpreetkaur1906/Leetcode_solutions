

122. Best Time to Buy and Sell Stock II
Intuition

Since unlimited transactions are allowed, every positive price difference can contribute to the total profit.

Approach
Compare each day's price with the previous day's price.
If today's price is higher, add the difference to the profit.
This effectively captures every profitable upward movement.
Time Complexity

O(n) — Each price is examined once.

Space Complexity

O(1) — Constant extra space.


