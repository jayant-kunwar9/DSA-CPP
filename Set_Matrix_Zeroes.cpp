//
//
// //                                              T(C)= O(n*m)
// //                                                  S(C)= O(m+n)
//
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// void setZeroes(vector<vector<int>>& matrix) {
//
//     int n = matrix.size();
//     int m = matrix[0].size();
//
//     vector<int> rows(n,0);
//     vector<int> cols(m,0);
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 rows[i]=1;
//                 cols[j]=1;
//             }
//         }
//     }
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (rows[i]==1 || cols[j]==1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }
//
// int main() {
//
//     vector<vector<int>> matrix= {{{1,1,1},{1,0,1},{1,1,1}}};
//
//     setZeroes(matrix);
//
//     for (int i = 0; i < matrix.size(); i++) {
//         for (int j = 0; j < matrix[0].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//     }
//
//     return 0;
//
//
// }
