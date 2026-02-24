// #include<iostream>
// using namespace std;
//
// int ans(int arr[], int n, int target) {
//     int st =0;
//     int end = n-1;
//
//     while (st<=end) {
//         int mid = st+(end-st)/2;
//
//         if (arr[mid]==target) {
//             return mid;
//         }
//
//         if (arr[st]<=arr[mid]) {
//             // Means left part is Sorted
//             if (arr[st]<=target && target<=arr[mid]){
//                 end  = mid -1;
//             }
//             else{
//                 st = mid+1;
//             }
//         }
//
//         else {
//             if (arr[mid]<=target && target<=arr[end]){   // Means Right Part is Sorted
//                 st = mid+1;
//             }
//             else {
//                 end = mid-1;
//             }
//         }
//     }
//     return -1;
// }
//
//
//
//
//
// int main() {
//                 int arr []=  {4,5,6,7,0,1,2};;
//                 int n = 7;
//
//                 int target = 0;
//
//                 cout<<ans(arr,n, target);
//
//                 return 0;
//
// }
