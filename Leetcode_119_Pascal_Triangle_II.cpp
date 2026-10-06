// #include<iostream>
// #include<vector>
// using namespace std;
//
// vector<int> getRow(int rowIndex) {
//
//     // store all rows of Pascal Triangle
//     vector<vector<int>> triangle;
//
//     // Pascal triangle always start with [1]
//     triangle.push_back({1});
//
//     // build rpws one by one until the required rowIndex
//     for (int row = 1; row <= rowIndex; row++) {
//
//         vector<int> newRow;
//
//         // Every Row Start with 1
//         newRow.push_back(1);
//
//         // Middle elements = sum of two adjacent elements from the previous row
//         for (int j = 0; j < triangle[row - 1].size() - 1; j++) {
//             newRow.push_back(
//                 triangle[row - 1][j] +
//                 triangle[row - 1][j + 1]
//             );
//         }
//
//         // Every row ends with 1
//         newRow.push_back(1);
//
//         // Save the completeed row inside the triangle
//         triangle.push_back(newRow);
//     }
//     // return only the row asked by the question
//     return triangle[rowIndex];
// }
//
// int main() {
//
//     // The row we want
//     int rowIndex = 4;
//
//     // Call getRow() and store the required row
//     vector<int> result = getRow(rowIndex);
//
//     // Print the required row
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//
//     cout << endl;
//
//     return 0;
// }