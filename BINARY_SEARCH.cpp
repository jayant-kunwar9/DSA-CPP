// #include <iostream>
// using namespace std;
//
// int BinarySearch(int arr[],int target, int size) {
//     int st=0;
//     int end=size-1;
//     while (st<=end) {
//         int mid=st+(end-st)/2;
//
//         if (target>arr[mid]) {
//             st=mid+1;
//         }
//         else if (target<arr[mid]) {
//             end=mid-1;
//         }
//         else {
//             return  mid;
//         }
//     }
//
// }
//
// int main() {
//     int arr[10]={0,1,21,3,44,53,46,87,8,92};
//     int target=53;
//     int size=10;
//
//     cout<<BinarySearch(arr,target,size);
//
//     return 0;
//
// }

//'------------------------------------------------------------------------------------------------------

// //                                                        USING RECURSION
//
// //                                                IT HAS LOG(n) TIME COMPLEXITY
//
// #include<iostream>
// using namespace std;
//
// int recursionBS(int arr[],int n, int start, int end,int target){
//     if (start<=end) {
//         int mid = start+(end-start)/2;
//         if (target>arr[mid]) {
//             recursionBS(arr,n,mid+1,end,target);
//         }
//         else if (target<arr[mid]) {
//             recursionBS(arr,n,start,mid-1,target);
//         }
//         else {
//             return mid;
//         }
//     }
// }
//
// int main() {
//     int arr[]={10,20,30,40,50};
//
//     int n =5;
//     cout<<recursionBS(arr,5,0,n-1,30);
//     return 0;
//
// }