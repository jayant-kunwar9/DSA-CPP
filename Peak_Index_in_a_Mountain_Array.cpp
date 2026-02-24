// // Here, we have to find the index of Peak value of the Array....
//
//
// #include <iostream>
// using namespace std;
//
// int ans(int arr[], int n) {
//
//     int st =0;
//     int end= n-1;
//
//     while (st<end) {
//         int mid = st+(end-st)/2;
//
//         if (arr[mid]<arr[mid+1]) {   // Peak value is on right side
//             st =mid+1;
//         }
//         else {
//             end = mid ;     // Peak value is on left side
//         }
//
//     }
//     return st;
//
// }
//
// int main() {
//
//     int arr[] ={0,10,5,2};
//
//     int n= 4;
//
//     cout<<ans(arr, n);
//
//     return 0;
//
// }
