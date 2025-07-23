#include<iostream>
using namespace std;

int diagonalSum(int mat[][4], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                sum += mat[i][j];
            }
            else if(j == n - 1 - i) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 8},
        {4, 5, 6, 9},
        {7, 8, 9, 8},
        {10, 11, 12, 6}
    };
    int rows = 4;
    int cols = 3;

    cout << diagonalSum(matrix, 4) << endl;

    return 0;
}
