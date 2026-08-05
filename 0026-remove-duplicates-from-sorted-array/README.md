Remove Duplicates from Sorted Array
1. Intuition

Since the array is already sorted, duplicate elements always appear next to each other. I used the two-pointer technique to keep track of the position where the next unique element should be placed without using any extra space.

2. Approach
   
If the array is empty, return 0.

Initialize one pointer to store the position of the last unique element.

Traverse the array using another pointer.

Whenever a new unique element is found, place it at the next available position.

Increment the pointer for unique elements.

Return the total number of unique elements.

3. Time Complexity

O(n), where n is the size of the array.

4. Space Complexity

O(1), as the array is modified in place.
