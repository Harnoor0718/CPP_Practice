#include<iostream>
using namespace std;
int maxRowSum(int mat[][3],int rows,int cols){
    int maxSum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSumI = 0;
        for(int j=0;j<cols;j++){
            rowSumI += mat[i][j];
        }
        maxSum = max(maxSum,rowSumI);
    }
    return maxSum;
    }

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    cout << maxRowSum(matrix, rows, cols) << endl;

    return 0;
}

