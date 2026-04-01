//
//
// //                                             T(C)= O(m*n)
// //                                               S(C)= O(m*n)
//
//
//
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//
//     int m =matrix.size();
//     int n = matrix[0].size();
//
//     vector<vector<int>> ans(n, vector<int>(m));
//
//     for (int i =0;i<m;i++) {
//         for (int j=0;j<n;j++) {
//             ans[j][i] = matrix[i][j];
//         }
//     }
//     return ans;
// }
//
// int main() {
//
//    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//
//     vector<vector<int>>result=transpose(matrix);
//
//     for (int i =0;i<matrix.size();i++) {
//         for (int j=0;j<matrix[i].size();j++) {
//             cout << result[i][j] << " ";
//         }
//     }
//
// }
