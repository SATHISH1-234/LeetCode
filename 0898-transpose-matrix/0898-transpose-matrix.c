int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {

    int newRowSize = matrixColSize[0];
    int newColSize = matrixSize;

    int** transposedMatrix = (int**)malloc(newRowSize * sizeof(int*));
    for (int i = 0; i < newRowSize; i++) {
        transposedMatrix[i] = (int*)malloc(newColSize * sizeof(int));
    }

 
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

  
    *returnSize = newRowSize;
    *returnColumnSizes = (int*)malloc(newRowSize * sizeof(int));
    for (int i = 0; i < newRowSize; i++) {
        (*returnColumnSizes)[i] = newColSize;
    }

    return transposedMatrix;
}
