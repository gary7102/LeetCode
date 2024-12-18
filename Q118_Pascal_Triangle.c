/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **arr = (int **)malloc(sizeof(int*) * numRows);
    int *columnSizes = (int *)malloc(sizeof(int) * numRows);
    *returnSize = numRows; 
    *returnColumnSizes = columnSizes;
    for(int i=0; i<numRows; i++){
        arr[i] = (int *)malloc(sizeof(int) * (i + 1)); 
        columnSizes[i] = i + 1;
        for(int j=0; j <= i; j++){
            if(j==0 || j==i) arr[i][j] = 1;
            else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    return arr;
}