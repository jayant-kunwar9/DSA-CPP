// #include<iostream>
// using namespace std;
//
// int ans(int arr[], int n ) {
//     int st =0;
//     int end = n-1;
//
//     while (st<end) {
//         int mid = st+ (end-st)/2;
//
//         if (mid%2==1)mid--;         // it makes mid even
//         if (arr[mid]==arr[mid+1]) {
//             st = mid+2;
//         }
//         else {
//             end = mid;
//         }
//     }
//     return st;
// }
//
// int main() {
//
//     int arr[]= {1,1,2,2,3,4,4,8,8};
//     int n = 9;
//
//     cout<<ans(arr, n);
//
//     return 0;
//
// }
