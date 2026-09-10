LeetCode 88 — Merge Sorted Array
🧠 Intuition

We are given two sorted arrays and need to merge them into the first array while maintaining sorted order.

Instead of shifting elements repeatedly, we can start from the end of both arrays.

The largest elements are at the end, so we place the larger element at the last available position in the first array.

This allows us to merge the arrays in-place.

🔍 Approach
Start from the last valid element of both arrays.
Compare the elements from the end.
Place the larger element at the last available position in the first array.
Move the corresponding pointer backward.
Continue until all elements from the second array are placed.
The first array will contain the completely merged sorted array.
⏱️ Time Complexity

O(M + N)

Each element is processed at most once.

💾 Space Complexity

O(1)

The merging is performed directly inside the first array without using an extra array.

📌 Key Takeaway

Merging from the end allows us to use the empty space in the first array efficiently and avoid unnecessary shifting of elements.
