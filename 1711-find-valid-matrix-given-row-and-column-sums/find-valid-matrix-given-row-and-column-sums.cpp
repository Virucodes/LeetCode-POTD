class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
         int m = rowSum.size();
    int n = colSum.size();
    
    // Initialize the matrix with 0s
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 0));
    
    // Copy rowSum and colSum to modify
    std::vector<int> rowSums = rowSum;
    std::vector<int> colSums = colSum;
    
    // Fill the matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = std::min(rowSums[i], colSums[j]);
            matrix[i][j] = value;
            rowSums[i] -= value;
            colSums[j] -= value;
        }
    }
    
    return matrix;
    }
};