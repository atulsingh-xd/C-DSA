class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int tar, int mR, int m,
                     int n) {
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid =start + (end - start) / 2;
            if (matrix[mR][mid] == tar) {
                return true;
            } else if (tar > matrix[mR][mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    };

    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        int m = matrix.size(), n = matrix[0].size();
        int sR = 0, eR = m - 1;
        int mR = sR + ((eR - sR) / 2);

        while (eR >= sR) {
            int mR = sR + ((eR - sR) / 2);

            if (matrix[mR][0] <= tar && tar <= matrix[mR][n - 1]) {
                return searchInRow(matrix, tar, mR, m, n);

            } else if (tar > matrix[mR][(n - 1)]) {
                sR = mR + 1;
            } else {
                eR = mR - 1;
            }
        }
        return false;
    }
};