
# Optimized approach to rotating a square matrix

This algorith rotates a square matrix 90 degrees counterclockwise, each element moves to a new position. 

The top row becomes the left most column in reverse order, the second row becomes the second-left most column in reverse order, and so on. 



---
## Pseudocode

`
 Constants
N = 4

function printMatrix(a[N][N]):
    for i = 0 to N-1:
        for j = 0 to N-1:
            print a[i][j] + " "
        print newline
    print "------------------"

function rotateOptimized(a[N][N]):
    # 1- Transpose (swap across main diagonal)
    for i = 0 to N-1:
        for j = i to N-1:
            swap(a[i][j], a[j][i])

    # 2- Reverse each row (rotate 90° clockwise)
    for i = 0 to N-1:
        reverse elements a[i][0 .. N-1]
function main():
    a = [
        [1,  2,  3,  4],
        [5,  6,  7,  8],
        [9, 10, 11, 12],
        [13,14, 15, 16]
    ]
    print "Original matrix:"
    printMatrix(a)
    rotateOptimized(a)

    print "After Optimized rotation:"
    printMatrix(a)
`
# Complexity:
Time O(N^2), Space O(1)