// class Solution {
// public:
//     long long maxMatrixSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         long long sum = 0;
//         for (int i = 0; i < n; i++) {
//             if (matrix[i][0] < 0 ) {
//                 matrix[i][0] = matrix[i][0] * -1;
//             }
//         }
//             for (int i = 0; i < n; i++) {
//                 if (matrix[0][i] < 0) {
//                     matrix[0][i] = matrix[0][i] * -1;
//                 }
//             }
//             for (int i = 0; i < n; i++) {
//                 sum = sum + matrix[i][i];
//             }
//             return sum;
//         }
//     };

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int neg = 0, min = INT_MAX;
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix.size(); j++) {
                int val = abs(matrix[i][j]);
                if(matrix[i][j] < 0) neg++; 
                if(val < min) min = val;
                sum += val;
            }
        }
        return (neg & 1) == 0 ? sum : sum - 2 * min;
    }
};