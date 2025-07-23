#include<iostream>
using namespace std;

int diagonalSum(int mat[][4], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += mat[i][i];  // main diagonal
        if(i != n - 1 - i) {
            sum += mat[i][n - 1 - i];  // secondary diagonal
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

    cout << diagonalSum(matrix, 4) << endl;

    return 0;
}
