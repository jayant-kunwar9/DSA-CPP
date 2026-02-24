// //                                                         LEETCODE: 3637
//
//
// #include<iostream>
// using namespace std;
//
// bool ans(int arr[], int n) {
//     int i =1;
//
//     while (i<n && arr[i]>arr[i-1]) {         // strictly increasing
//         i++;
//     }
//     if (i==1) return false;
//
//     while (i<n && arr[i]<arr[i-1]) {         // strictly decreasing
//         i++;
//     }
//     if (i==n) return false;
//
//     while (i<n && arr[i]>arr[i-1]) {           //  strictly increasing
//         i++;
//     }
//     return i==n;
// }
//
// int main() {
//
//     int arr[]={1,3,5,4,2,6};
//     int n = 6;
//
//     cout<<boolalpha<<ans(arr, n);    // (boolalpha) , gives output as TRUE or FALSE , instead of 1 or 0.....
//
//     return 0;
//
//
// }