// #include<iostream>
// #include<vector>
// using namespace std;
//
// vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> triangle;
//
//     // first row
//
//     triangle.push_back({1});
//
//     for(int row=1;row<numRows; row++){
//
//         vector<int> newRow;
//
//         // first element
//
//         newRow.push_back(1);
//
//         // middle elements
//
//         for(int j=0;j<triangle[row-1].size()-1;j++){   // this is used because by applying formula in previous row, it doesnot go beyond last element
//             newRow.push_back(
//                 triangle[row-1][j]+triangle[row-1][j+1]
//             );
//         }
//
//         // last element
//
//         newRow.push_back(1);
//
//         // add new row
//
//         triangle.push_back(newRow);
//     }
//
//     return triangle;
// }
//
// int main() {
//
//     // Number of rows we want to generate
//     int numsRows = 5;
//
//     // Call generate() and store the returned Pascal Triangle
//     vector<vector<int>> triangle = generate(numsRows);
//
//     // Traverse through each row of the triangle
//     for (int i = 0; i < triangle.size(); i++) {
//
//         // Traverse through each element of the current row
//         for (int j = 0; j < triangle[i].size(); j++) {
//
//             // Print the current element
//             cout << triangle[i][j] << " ";
//         }
//
//         // Move to the next line after printing one complete row
//         cout << endl;
//     }
//
//     // End the program
//     return 0;
// }
//
//
//
//
