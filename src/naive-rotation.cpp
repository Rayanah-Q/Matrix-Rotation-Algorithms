#include <iostream>
using namespace std;

const int MAX = 200; // Maximum allowed matrix size

void printMatrix(int a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "------------------" << endl;
}

// Naive (Brute-Force) algorithm for rotating a matrix 90° clockwise
void rotateBruteForce(int a[][MAX], int n) {
    // Repeat for each layer of the matrix
    for (int layer = 0; layer < n / 2; layer++) {
        int size = n - 2 * layer; // Length of the current layer

        // Perform (size - 1) single-step rotations to complete 90 degrees
        for (int step = 0; step < size - 1; step++) {

            int buf[MAX][MAX]; // Temporary matrix (O(n²) extra space)

            // Copy the entire matrix into the buffer
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    buf[i][j] = a[i][j];

            // Rotate the outer ring one step (Right → Down → Left → Up)

            // Top row: shift elements to the right
            for (int j = layer; j < n - layer - 1; j++)
                a[layer][j + 1] = buf[layer][j];

            // Right column: shift elements downward
            for (int i = layer; i < n - layer - 1; i++)
                a[i + 1][n - layer - 1] = buf[i][n - layer - 1];

            // Bottom row: shift elements to the left
            for (int j = n - layer - 1; j > layer; j--)
                a[n - layer - 1][j - 1] = buf[n - layer - 1][j];

            // Left column: shift elements upward
            for (int i = n - layer - 1; i > layer; i--)
                a[i - 1][layer] = buf[i][layer];
        }
    }
}

int main() {
    int n;
    cout << "Enter n (square matrix size): ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid size!\n";
        return 0;
    }

    int a[MAX][MAX];
    cout << "Enter " << n * n << " elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "\nOriginal matrix:\n";
    printMatrix(a, n);

    rotateBruteForce(a, n);

    cout << "After Brute-Force rotation (90 degrees clockwise):\n";
    printMatrix(a, n);

    return 0;
}
