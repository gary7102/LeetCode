/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

// [i, j] = [j, i]
// 對角線對面的互換，對角線不動
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int newRows = *matrixColSize;  // 轉置後的行數
    int newCols = matrixSize;      // 轉置後的列數

    // 分配指標陣列
    int **result = (int **)malloc(newRows * sizeof(*result));
    *returnColumnSizes = (int *)malloc(newRows * sizeof(int));

    for (int i = 0; i < newRows; i++) {
        result[i] = (int *)malloc(newCols * sizeof(int));
        (*returnColumnSizes)[i] = newCols;  // 記錄該行的列數
        
        for (int j = 0; j < newCols; j++) {
            result[i][j] = matrix[j][i];  // 轉置操作
        }
    }

    *returnSize = newRows;
    return result;
}
