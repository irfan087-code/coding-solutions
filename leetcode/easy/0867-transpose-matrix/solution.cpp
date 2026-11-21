class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();       // Number of rows
        int n = matrix[0].size();    // Number of columns
        
        // Create a new matrix with swapped dimensions (n x m)
        vector<vector<int>> result(n, vector<int>(m));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Swap row and column indices
                result[j][i] = matrix[i][j];
            }
        }
        
        return result;
    }
};
