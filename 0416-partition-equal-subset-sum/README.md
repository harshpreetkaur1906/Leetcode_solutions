Intuition

The objective of the Partition Equal Subset Sum problem is to divide an array into two subsets such that both subsets have the same sum.

First, the sum of all elements is calculated. If the total sum is even, each subset must contain exactly half of the total sum. Therefore, the target sum is obtained by dividing the total sum by two.

For example, if the total sum is 22, both subsets must have a sum of 11. Thus, instead of finding both subsets separately, we only need to determine whether it is possible to form one subset with a sum equal to 11. If such a subset exists, the remaining elements will automatically form the other subset with the same sum.

If the total sum is odd, equal partitioning is impossible because it cannot be divided into two equal integer sums.

Approach
Calculate the total sum of all elements.
Check whether the total sum is even. If it is odd, return false.
Consider half of the total sum as the target.
Determine whether a subset of the array can be formed whose sum is equal to this target.
This subset-sum problem is solved using Dynamic Programming.
Time Complexity

O(n × target), where n is the number of elements and target is half of the total sum.

Space Complexity

O(target) when using a one-dimensional Dynamic Programming array.
