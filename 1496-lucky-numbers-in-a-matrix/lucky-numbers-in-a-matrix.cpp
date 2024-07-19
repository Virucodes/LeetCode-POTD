class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector<int> ans;
        
        for(int i = 0; i < m; i++) {
            // Find the minimum element in the ith row
            int minVal = INT_MAX;
            int minColIndex = 0;
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                    minColIndex = j;
                }
            }
            
            // Check if this minimum element is the maximum in its column
            bool isLucky = true;
            for(int k = 0; k < m; k++) {
                if(matrix[k][minColIndex] > minVal) {
                    isLucky = false;
                    break;
                }
            }
            
            // If it's a lucky number, add it to the result
            if(isLucky) {
                ans.push_back(minVal);
            }
        }
        
        return ans;
    }
};