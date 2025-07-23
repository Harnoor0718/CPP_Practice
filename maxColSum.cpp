#include<iostream>
#include<climits>  // For INT_MIN
using namespace std;

int maxColSum(int mat[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    for(int j = 0; j < cols; j++) { // iterate over columns
        int colSum = 0;
        for(int i = 0; i < rows; i++) { // sum elements in column j
            colSum += mat[i][j];
        }
        maxSum = max(maxSum, colSum);
    }
    return maxSum;
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    int rows = 4;
    int cols = 3;

    cout <<maxColSum(matrix, rows, cols) << endl;

    return 0;
}
