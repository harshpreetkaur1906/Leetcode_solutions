🧠 Intuition

The array is sorted, so Binary Search can be used to efficiently find the target or determine where it should be inserted.

At every step, the middle element is compared with the target. Based on the comparison, half of the search space is eliminated.

If the target is found, its index is returned. If it is not found, the left pointer eventually reaches the position where the target should be inserted.

🔍 Approach
Start with two pointers, left at the beginning and right at the end of the array.
Find the middle element of the current search range.
Compare the middle element with the target:
If both are equal, return the middle index.
If the middle element is smaller than the target, search in the right half.
If the middle element is greater than the target, search in the left half.
Continue the process until the search range becomes empty.
If the target is not found, return the left pointer because it represents the correct insertion position.
⏱️ Time Complexity

O(log n)

Binary Search reduces the search space by half after every iteration.

💾 Space Complexity

O(1)

Only a constant amount of extra space is used for the pointers and middle index.

📌 Key Takeaway

Since the array is sorted, Binary Search allows us to find the target or its correct insertion position efficiently in O(log n) time.
