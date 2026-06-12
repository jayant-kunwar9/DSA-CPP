// #include<iostream>
// #include<vector>
// using namespace std;
//
// int numSpecial(vector<vector<int>>& mat) {
//     int n = mat.size();  // no. of rows
//     int m= mat[0].size();   // no. of columns
//
//
//     // count no. of 1 in each row
//     vector<int> row(n,0);
//
//     // count no. of 1 in each coulmn
//     vector<int> col(m,0);
//
//     // fill row and col...
//
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (mat[i][j]==1) {
//                 row[i]++;   // count 1 in row i
//                 col[j]++;   // count 1 in col j
//             }
//         }
//     }
//
//     int count =0;
//
//     // check for special positions
//
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//
//             // condition for special position
//
//             if (mat[i][j]==1 && row[i]==1 && col[j]==1) {
//                 count++;
//             }
//         }
//     }
//     return count;
//
// }
//
// int main() {
//
//     vector<vector<int>> mat= {{1,0,0}, {0,0,1}, {1,0,0}};
//
//     cout<<numSpecial(mat);
//
//     return 0;
//
// }
