
# ✨ Optimized approach to rotating a square matrix

## 📝 Definition

The *optimized matrix rotation algorithm* (in-place rotation algorithm) is a method used to rotate a N x N matrix 90° clockwise quickly
without using extra space for another matrix.

### Benefits of the optimized algorithm

- **Time complexity** : O(N²) elements are visited twice at most
- **Space complexity** : O(1) rotation happenes in place, no extra matrix needed.
- **Simplisity** : just transpose and reverse. no complex math required.
- **Scalability** : works smoothly with any matrix size.
    

---

## ⚙️ How it works
1) Transpose the matrix → swap elements across the main diagonal.
   - For every element at (i, j), swap matrix[i][j] and matrix[j][i].
   - Transposing converts rows into columns: element at (i, j) moves to (j, i).

2) Reverse each row → flip left-to-right.
   - After transposition, reversing each row moves elements to their final rotated positions.
   - Combined effect: original element at (i, j) ends up at the new place 90° clockwise rotation.

---

## Pseudocode

```
function rotateOptimized(matrix[N][N]):
    for i = 0 to N-1:
        for j = i to N-1:
            swap(matrix[i][j], matrix[j][i])
    for i = 0 to N-1:
        reverse elements matrix[i][0 .. N-1]
```
---

## 👩🏽‍💻 Examples
<img width="402" height="202" alt="image" src="https://github.com/user-attachments/assets/85bfb401-43f9-4c54-8cc4-70ce0c37a49b" />

<img width="402" height="172" alt="image" src="https://github.com/user-attachments/assets/9c97b00f-d05b-46df-8785-7e513f7fa44d" />

---
## ⌛ Excution time
| Matrix size | Excution time |
|-------------|---------------|
|3 x 3|0.458s|
|4 x 4|0.47s|
|5 x 5|0.482s|
|9 x 9| 0.521s|
|15 x 15|0.468s|

» Based on these results we can conclude that:

Best-case = Average-case = Worst-case

>Time O(N^2), Space O(1)

---
