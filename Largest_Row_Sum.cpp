// //
// //
// // //                                                 T(C)= O(row) * O(col)
// // //                                                 S(C)= O(1)
// //
// //
// #include <iostream>
// #include <climits>
// using namespace std;
//
//
// int  rowSum(int arr[][4], int row, int col) {        // In giving Parmeter, we have to give atleast the value of Column...
//
//     for (int row=0; row<3; row++) {
//         int sum =0;
//         for (int  col =0; col<4;col++) {
//              sum +=arr[row][col] ;
//
//             }
//         cout<<sum<<endl;
//         }
//     }
//
//
// int largestRowIndex(int arr[][4], int row, int col) {
//     int maxi = INT_MIN;
//     int rowIndex=-1;
//
//     for (int row=0; row<3; row++) {
//         int sum =0;
//         for (int  col =0; col<4;col++) {
//             sum +=arr[row][col] ;
//         }
//
//             if (sum>maxi) {
//                 maxi= sum;
//                 rowIndex = row;
//             }
//
//         }
//     cout<<"Maximum sum of a row: "<<maxi<<endl;
//     return rowIndex;
//
//     }
//
//
// int main() {
//     int arr[3][4];
//
//
//     for (int row=0; row<3; row++) {
//         for (int  col =0; col<4;col++) {
//             cin>>arr[row][col];
//         }
//     }
//
//
//             for (int row=0; row<3; row++) {
//                 for (int  col =0; col<4;col++) {
//                     cout<<arr[row][col]<<" ";
//                 }
//                 cout<<endl;
//             }
//
//
//     int ans =largestRowIndex(arr, 3, 4);
//     cout << "Row with maximum sum index: " << ans << endl;
//
//    return 0;
//
//                 }
//
