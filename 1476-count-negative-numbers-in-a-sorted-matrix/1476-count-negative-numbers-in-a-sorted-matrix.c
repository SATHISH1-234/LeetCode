int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int n = gridSize; 
    int m = *gridColSize; 
    int count = 0;
    for (int i = 0; i < n; i++) {
        int low = 0;
        int high = m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (grid[i][mid] < 0) high = mid - 1;
            else  low = mid + 1;
        }
        count += m - low;
    }

    return count;
}
