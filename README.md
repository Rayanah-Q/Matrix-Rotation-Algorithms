# 🌀 Rotate Matrix / Image

In computational fields such as **image processing**, **computer graphics**, and **game development**, rotating two-dimensional matrices (most often by 90°) is a common operation.
An image can be represented as a matrix of pixels, and rotation rearranges these pixels so that the image appears correctly oriented.  

The challenge lies in performing this rotation efficiently — minimizing both *time complexity* and *memory usage*.

## 🧩 Example Visualization

| Original Matrix | Rotated Matrix (90°) |
|------------------|-------------------|
|<img width="350" height="350" alt="matrixBeforeRotation" src="https://github.com/user-attachments/assets/cd0a230c-6e96-485b-b5a1-d8f9058ae221" />|<img width="350" height="350" alt="matrixAfterRotation" src="https://github.com/user-attachments/assets/5999ec34-a052-400b-8943-9442c79335f8" />|
|![matrixBefore](https://github.com/user-attachments/assets/aaeea61b-3312-4b01-a591-754248174648)|![matrixAfter](https://github.com/user-attachments/assets/af3a4ab5-3b7e-42b2-a5d2-9c2daa316ab8)|

---

## 🎯 Objective
The objective of this project is to conduct a performance comparison between two algorithms for rotating a matrix: the naive O(n⁴) approach and the optimized O(n²) approach.

highlighting the efficiency improvements achieved through algorithmic optimization.

> The optimized algorithm achieves the same effect as the naive one with *far less time and memory*, making it ideal for real-world applications.

---

## ⚙ Algorithms

### 1. Naive Approach — Brute-Force Layer Rotation with Full Copy
*Description:*
- Repeatedly copies the entire matrix into a temporary array during each small rotation step for every layer.  
- Extremely slow and memory-intensive.

*Complexity:*
- 🕒 *Time:* O(n⁴)  
- 💾 *Space:* O(n²)

*Drawback:*  
Requires copying the entire matrix multiple times, increasing both time and memory usage dramatically.

---

### 2. Optimized Approach — In-Place Rotation
*Description:*
- Rotates the matrix within itself without allocating extra space.

*Steps:*
1. *Transpose* the matrix — swap elements across the main diagonal.  
2. *Reverse* each row — reorder elements to complete the 90° clockwise rotation.

*Complexity:*
- 🕒 *Time:* O(n²)  
- 💾 *Space:* O(1)

---

## 🧠 Explanation
The naive approach moves each element multiple times due to repeated copying, causing an explosion in runtime to *O(n⁴)* and requiring *O(n²)* additional space.  

In contrast, the optimized algorithm performs the same task in-place by:
- Swapping elements across the diagonal (transposition)  
- Reversing each row  

This combination achieves the same result in *linear-quadratic time* with *constant space*, making it practical for real-world uses such as image rotation and data manipulation.

---

## 🌍 Applications
- 🖼 *Image Processing:* Rotating images by 90°, 180°, or 270°  
- 🎮 *Game Boards:* Adjusting grid layouts in games like Tetris or tile-based puzzles  
- 📊 *Data Manipulation:* Efficiently changing the orientation of structured data

---

## 🧾 Summary
| Approach | Time Complexity | Space Complexity | Method |
|-----------|----------------|------------------|---------|
| Naive | O(n⁴) | O(n²) | Full copy for each layer |
| Optimized | O(n²) | O(1) | Transpose + Reverse rows |

---
## 👥 Group Members
- *Haneen Almahmoud*
- *Rayanah Alqoblan*
- *Shatha Aldubaib*
- *Shihanah Alazzaz*
- *Leena Almutairi*

---
