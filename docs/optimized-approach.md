
# Optimized approach to rotating a square matrix

## Definition

This algorith rotates a square matrix 90 degrees clockwise, each element moves to a new position. 

---

## How it works


---

## Pseudocode

`
function printMatrix(a[N][N]):
    for i = 0 to N-1:
        for j = 0 to N-1:
            print a[i][j] + " "
        print newline

function rotateOptimized(a[N][N]):
    for i = 0 to N-1:
        for j = i to N-1:
            swap(a[i][j], a[j][i])
    for i = 0 to N-1:
        reverse elements a[i][0 .. N-1]
`
---

## Examples

---
## Excution time
| Matrix size | Excution time | time complexity|
|-------------|---------------|----------------|

Time O(N^2), Space O(1)
---
## Algorithm scenarios
### Best-case
### Average-case
### Worst-case 
