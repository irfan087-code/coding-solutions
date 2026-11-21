class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // Check if reshaping is possible (total elements must match)
        if (m * n != r * c) {
            return mat;
        }
        
        vector<vector<int>> reshaped(r, vector<int>(c));
        
        for (int i = 0; i < m * n; ++i) {
            // Map 1D index 'i' back to 2D coordinates for both matrices
            reshaped[i / c][i % c] = mat[i / n][i % n];
        }
        
        return reshaped;
    }
};
