// DFS

class Solution {
    public:
        void dfs(vector<vector<char>>& grid, int i, int j) {
            int m = grid.size(), n = grid[0].size();
            
            // Check for out-of-bounds or water cell ('0')
            if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
                return;
    
            grid[i][j] = '0'; // Mark as visited
    
            // Visit all 4 directions
            dfs(grid, i + 1, j); // Down
            dfs(grid, i - 1, j); // Up
            dfs(grid, i, j + 1); // Right
            dfs(grid, i, j - 1); // Left
        }
    
        int numIslands(vector<vector<char>>& grid) {
            int islands = 0;
            int m = grid.size(), n = grid[0].size();
    
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == '1') {
                        islands++;  // Found an island
                        dfs(grid, i, j);  // Explore the island
                    }
                }
            }
    
            return islands;
        }
    };
    
