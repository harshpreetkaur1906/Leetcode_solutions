Two Sum

Intuition

The problem asks us to find two numbers in the array whose sum is equal to the given target. My first thought was to check every possible pair, but that would require unnecessary comparisons. To improve the efficiency, I used a hash map to store the numbers that have already been visited. This allows me to quickly check whether the required complement exists while traversing the array only once.

Approach
Create an unordered map to store each number and its index.
Traverse the array from left to right.
For each element, calculate the complement as target - current element.
Check whether the complement already exists in the hash map.
If it exists, return the indices of the complement and the current element.
Otherwise, store the current element along with its index in the hash map.
Continue until the required pair is found.

Time Complexity

O(n), where n is the number of elements in the array. Each element is processed only once.

Space Complexity

O(n) because the hash map stores at most one entry for each element.
