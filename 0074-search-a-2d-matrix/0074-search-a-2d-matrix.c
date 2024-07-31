bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int n = matrixSize;
    int m = *matrixColSize;
    int low = 0,high = (n*m)-1;
    while(low <= high)
    {
        int mid = low + (high-low) / 2;
        int value = matrix[mid/m][mid%m];
        if(value == target) return true;
        else if(value < target) low = mid + 1;
        else high = mid - 1; 
    }
    return false;
}