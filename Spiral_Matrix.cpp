//
//
// //                                                  T(C)=O(m*n)
// //                                                 S(C)=O(m*n)
//
//
//
// #include <iostream>
// #include<vector>
// using namespace std;
//
// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> ans;
//     int m = matrix.size();
//     int n = matrix[0].size();
//
//
//     int top = 0;
//     int left=0;
//     int bottom= m-1;
//     int right= n-1;
//
//
//     while(top<=bottom && left <=right){
//
//         // traversing row wise
//
//         for(int col=left; col<=right; col++){
//             ans.push_back(matrix[top][col]);
//         }
//         top++;
//
//         // traversing right top to right bottom
//
//         for(int row = top;row<=bottom;row++){
//             ans.push_back(matrix[row][right]);
//         }
//         right--;
//
//         // traverse right bottom to left bottom
//
//
//         if (top<=bottom){
//             for(int col = right; col>=left; col--){
//                 ans.push_back(matrix[bottom][col]);
//             }
//             bottom--;
//         }
//
//         //traverse bottom left to top left except the first top index
//
//         if(left<=right){
//             for(int row = bottom; row>=top; row--){
//                 ans.push_back(matrix[row][left]);
//             }
//             left++;
//         }
//     }
//
//     return ans;
//
// }
//
// int main() {
//     vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//
//     vector<int> result = spiralOrder(matrix);
//
//     for(int x : result){
//         cout << x << " ";
//     }
//
//     return 0;
// }