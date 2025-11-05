#include <iostream>
#include "timer.h"
using namespace std;

const int MAX = 200;

void printMatrix(int a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "";
        }
        cout << "\n";
    }
}
void rotateOptimized(int a[][MAX], int n) {
    //Transpose:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    //Reverse:
    for (int i = 0; i < n; i++) {
        int l = 0, r = n - 1;
        while (l < r) {
            int temp = a[i][l];
            a[i][l] = a[i][r];
            a[i][r] = temp;
            l++;
            r--;
        }
    }
}
int main() {
    int n;
    Timer t;
    cout << "Enter n (square matrix size): ";
    cin >> n;
    if (n <= 0 || n > MAX) {
        cout << "invalid input! \n";
        return 0;
    }
    
    int a[MAX][MAX];
    cout << "Enter " << n * n << " elements row-wise:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    t.start();
    cout << "\nBefore rotation: \n";
    printMatrix(a, n);

    rotateOptimized(a, n);

    cout << "\nAfter 90-degree clockwise rotation: \n";
    printMatrix(a, n);
    t.stop();
    t.printDuration(); 
    return 0;
}