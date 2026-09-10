123. Best Time to Buy and Sell Stock III
Intuition

We can make at most two transactions. The problem can be divided into tracking the best possible states for buying and selling during the first and second transactions.

Approach

Maintain four states:

First buy
First sell
Second buy
Second sell

Update these states for every price to obtain the maximum profit after at most two transactions.

Time Complexity

O(n) — One pass through the prices.

Space Complexity

O(1) — Only four state variables are maintained.
