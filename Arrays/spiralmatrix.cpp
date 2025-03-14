class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> result;
            
            if (matrix.empty()) return result;
    
            int r = matrix.size(), c = matrix[0].size();
            int tp = 0, br = r - 1, lc = 0, rc = c - 1, te = 0;
    
            while (te < r * c) {
                // Traverse from left to right
                for (int j = lc; j <= rc && te < r * c; j++) {
                    result.push_back(matrix[tp][j]);
                    te++;
                }
                tp++;
    
                // Traverse from top to bottom
                for (int i = tp; i <= br && te < r * c; i++) {
                    result.push_back(matrix[i][rc]);
                    te++;
                }
                rc--;
    
                // Traverse from right to left
                for (int j = rc; j >= lc && te < r * c; j--) {
                    result.push_back(matrix[br][j]);
                    te++;
                }
                br--;
    
                // Traverse from bottom to top
                for (int i = br; i >= tp && te < r * c; i--) {
                    result.push_back(matrix[i][lc]);
                    te++;
                }
                lc++;
            }
    
            return result;
        }
    };
    