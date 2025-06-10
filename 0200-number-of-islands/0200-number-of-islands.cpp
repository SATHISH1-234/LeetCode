class Solution {
public:
    void bfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        bfs(grid, i, j + 1);
        bfs(grid, i, j - 1);
        bfs(grid, i + 1, j);
        bfs(grid, i - 1, j);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n1 = grid.size(), n2 = grid[0].size(), count = 0;
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    bfs(grid, i, j);
                }
            }
        }
        return count;
    }
};