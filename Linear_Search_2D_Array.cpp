
//                                                 T(C)= O(row) * O(col)
//                                                 S(C)= O(1)



// #include <iostream>
// using namespace std;
//
//
// bool isPresent(int arr[][4], int target, int row, int col) {        // In giving Parmeter, we have to give atleast the value of Column...
//
//     for (int row=0; row<3; row++) {
//         for (int  col =0; col<4;col++) {
//             if (arr[row][col]== target) {
//                 return true;
//             }
//         }
//     }
//     return false;
//
// }
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
//     cout<<"Enter element to search: "<<endl;
//     int target;
//     cin>>target;
//                     if (isPresent(arr, target , 3, 4)) {
//                         cout<<"Element Found...";
//                     }else {
//                         cout<<"Element Not Found...";
//                     }
//    return 0;
//
//                 }
//
//
//
//
//
//
