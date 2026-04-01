

// //                                               T(C)= O(n*m)     ----- It is slow for large matrix..
// //                                               S(C)= O(1)
//
//
//
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//
//     for (int i =0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (matrix[i][j]==target) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
//
// int main() {
//     vector <vector<int>>  matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
//
//     int target= 5;
//
//     cout<<boolalpha<<searchMatrix(matrix,target);
//
//     return 0;
//
// }




//----------------------------------------------------------------------------------------------------------------------------------


//                                              T(C)= O(m+n)
//                                              S(C)= O(1)



// #include<iostream>
// #include<vector>
// using namespace std;
//
// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//
//     int i = 0;
//     int j = m - 1;
//
//     while (i < n && j >= 0) {
//         if (matrix[i][j] == target) {
//             return true;
//         }
//         else if (matrix[i][j] > target) {
//             j--; // move left
//         }
//         else {
//             i++; // move down
//         }
//     }
//     return false;
// }
//
// int main() {
//
//     vector <vector<int>>  matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
//
//     int target= 5;
//
//     cout<<boolalpha<<searchMatrix(matrix,target);
//
//     return 0;
//
// }
