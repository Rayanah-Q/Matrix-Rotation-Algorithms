#include <iostream>
#include <algorithm>
using namespace std;

#define N 4

void printMatrix(int a[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << "-----------------------" << endl;

}

void rotateOptimized(int a[N][N]) {
    // 1- Transpose
    for (int i = 0; i < N; i++)
        for (int j = i; j < N; j++)
            swap(a[i][j], a[j][i]);

    // 2- Reverse each row
    for (int i = 0; i < N; i++)
        reverse(a[i], a[i] + N);
}

int main() {
    int a[N][N] = {
        {1 , 2 , 3 , 4 },
        {5 , 6 , 7 , 8 },
        {9 , 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Original matrix:\n";
    printMatrix(a);

    rotateOptimized(a);

    cout << "After Optimized rotation:\n";
    printMatrix(a);
    return 0;
}