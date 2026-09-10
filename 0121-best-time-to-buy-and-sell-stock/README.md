121. Best Time to Buy and Sell Stock
Intuition

To maximize profit, we need to buy at the lowest price seen so far and sell later at the highest possible price.

Approach
Maintain the minimum stock price encountered so far.
For each price, calculate the possible profit by selling at that price.
Keep track of the maximum profit.
Time Complexity

O(n) — One pass through the prices.

Space Complexity

O(1) — Only a few variables are required.


