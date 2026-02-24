// //                                                         BRUTE FORCE APPROACH
//
// #include<iostream>
// using namespace std;
//
// void answ(int arr[], int n) {
//     for (int i=0;i<n;i++) {
//         int product =1;
//         for (int j=0;j<n;j++) {
//             if (i!=j) {
//                 product*=arr[j];
//             }
//         }
//         cout<<product<<" ";
//     }
// }
//
// int main() {
//     int arr[]={1,2,3,4};
//     int n=4;
//
//     answ(arr,n);
//
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------

// // //                                                     OPTIMAL APPROACH
//
//
// #include <iostream>
// using namespace std;
//
// int ans(int arr[], int n) {
//
//     int prefix [n];
//     int suffix[n];
//     int result[n];
//
//     //  prefix
//     prefix[0]=1;
//     for (int i=1;i<n;i++) {
//       prefix[i] = prefix[i-1] * arr[i-1];
//
//     }
//
//     // suffix
//     suffix[n-1]=1;
//     for (int i=n-2;i>=0;i--) {
//          suffix[i]=suffix[i+1]*arr[i+1];
//     }
//
//     //result
//     for (int i =0;i<n;i++) {
//         result[i] =prefix[i]*suffix[i];
//     }
//
//     //print
//     for (int i=0;i<n;i++) {
//         cout<< result[i]<<" ";
//     }
// }
//
// int main() {
//
//     int arr[]={1,2,3,4};
//     int n =4;
//
//     ans(arr,n);
//
//     return 0;
//
// }

// This Approach doesnot give O(1), Space Complexity, in LeetCode:

//---------------------------------------------------------------------------------------------------------

// //                                       MORE OPTIMAL O(1) SPACE COMPLEXITY  (LEETCODE)
//
// #include <iostream>
// using namespace std;
//
// void ans(int arr[] , int n) {
//      int result[n];
//
//     result[0]=1;
//     for (int i=1;i<n;i++) {
//         result[i] = result[i-1] * arr[i-1];
//     }
//
//     int suffix =1;
//     for (int i=n-1; i>=0;i--) {
//         result[i]*=suffix;
//         suffix*=arr[i];
//     }
//     for (int i=0;i<n;i++) {
//         cout<<result[i]<<" ";
//     }
// }
//
// int main() {
//
//     int arr[]= {1,2,3,4};
//     int n =4;
//
//      ans(arr,n);
//
//     return 0;
//
// }




