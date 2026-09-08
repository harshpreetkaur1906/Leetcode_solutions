# Largest Rectangle in Histogram

## 💡 Intuition

The goal is to find the largest rectangle that can be formed using consecutive bars of a histogram.

A **monotonic increasing stack** is used to keep track of bar indices. When a smaller bar is encountered, the taller bars in the stack can no longer extend further, so their rectangle areas are calculated.

## 🔹 Approach

1. Traverse the histogram from left to right.
2. Store indices of bars in an increasing-height stack.
3. When the current height is smaller than the stack's top height, pop the taller bars.
4. For each popped bar, calculate:

   * **Height** = height of the popped bar
   * **Width** = distance between the nearest smaller bars
   * **Area** = `Height × Width`
5. Keep updating the maximum area.
6. Process the remaining bars using an extra imaginary bar of height `0`.

### Example

```text
Input:  [2, 1, 5, 6, 2, 3]
Output: 10
```

The largest rectangle is formed by heights `5` and `6`.

```text
Height = 5
Width  = 2
Area   = 5 × 2 = 10
```

## ⏱️ Complexity

* **Time Complexity:** `O(n)` — Each bar is pushed and popped from the stack at most once.
* **Space Complexity:** `O(n)` — The stack can store up to `n` indices.

## 🛠️ Technologies

* C++
* Java
* Python

## 🎯 Key Concept

**Monotonic Stack** — efficiently finds the boundaries required to calculate the largest rectangle area.

