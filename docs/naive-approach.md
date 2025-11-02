# 🐌 Naive approach to rotating a square matrix

## 📑 Definition 

The **naive approach for rotating matrix by 90° clockwise** works by repetedly copying the entire matrix into
a temporary matrix during each mini rotation step. For every layer and every element in that layer, the algorithm performes a full copy of the original matrix before placing each value in its new position.

This makes the algoritm *extremely* **slow and memory-intensive**. Although the method logically accomplishes the rotation, it is inefficient compared to optimized techniques.

---

## 🛞 How it works  

  - Create a temporary matrix of the same size.
  - For each layer in the matrix, rotate elements one step at a time.
  - Before each rotation, copy the full matrix to the temporary matrix.
  - Move each element from the temporary position to the new rotated position.

---

## Pseudocode

```
function rotateNaive(matrix):
    n = lenght (matrix)
    create temp [n][n]

    for layer from 0 to n/2:
      for i from layer to n-layer-1:
        // copy entire matrix to temp
        for r from 0 to n-1:
          for c from 0 to n-1:
            temp [r][c] = matrix [r][c]

        // rotate one step
        matrix [layer][i] = temp [n-i-1][layer]
        matrix [i][n-layer-1] = temp [layer][i]
        matrix [n-layer-1][n-i-1] = temp [i][n-layer-1]
        matrix [n-i-1][layer] = temp [n-layer-1][n-i-1]
```
---

## ⌛ Complexity analysis
- Time Complexity: O(n⁴)
- Space Complexity: O(n²)

  reason: The algorithm copies the whole matrix many times, increasing both time and memory usage.
