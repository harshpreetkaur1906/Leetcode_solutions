188. Reverse Bits
Intuition

The goal is to reverse the order of the 32 bits of an integer. We can extract the bits from the original number one by one and construct the reversed number.

Approach
Extract the least significant bit.
Shift the result to make room for the extracted bit.
Add the extracted bit to the result.
Shift the original number to process the next bit.
Repeat for all 32 bits.
Time Complexity

O(1) — Exactly 32 bits are processed.

Space Complexity

O(1) — Only constant extra space is used.
