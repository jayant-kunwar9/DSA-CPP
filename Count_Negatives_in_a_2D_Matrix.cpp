//
//
// //                                                      T(C)= O(n*m)
// //                                                         S(C)= O(1)
//
//
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int countNegatives(vector<vector<int>>& grid) {
//
//     int n = grid.size();
//     int m = grid[0].size();
//
//     int count =0;
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] < 0) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
//
//
// int main() {
//     vector<vector<int>> grid= {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
//
//     cout << countNegatives(grid) << endl;
//
//     return 0;
//
// }
