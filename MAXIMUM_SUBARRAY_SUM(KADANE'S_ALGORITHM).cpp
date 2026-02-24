// // First just how to print the subarrays of an Array:
//
// #include<iostream>
// using namespace std;
//
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     for (int st=0;st<n;st++) {    // this is for start
//         for (int end=st;end<n;end++) {     // this is for end
//             for (int i=st;i<=end;i++) {       // this is for printing the subarray
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------

// //                                               MAXIMUM SUBARRAY SUM (USING BRUTE FORCE APPROACH)
//
// #include<iostream>
// using namespace std;
//
// int main() {
//     int arr[]={3,-4,5,4,-1,7,-8};
//     int n=7;
//     int maxSum=INT_MIN;
//
//     for (int st=0;st<n;st++) {
//         int currSum=0;
//         for (int end=st;end<n;end++) {
//             currSum+=arr[end];
//             maxSum=max(maxSum,currSum);
//         }
//     }
//     cout<<"Maximum Subarray Sum: "<<maxSum<<endl;
//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------

// //                                                KADANE'S ALGORITHM
//
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[7]={3,-4,5,4,-1,7,-8};
//     int n=7;
//     int currSum=0;
//     int maxSum=INT_MIN;
//
//     for (int i=0;i<n;i++) {
//         currSum+=arr[i];
//         maxSum=max(currSum,maxSum);
//         if (currSum<0) {
//             currSum=0;
//         }
//     }
//     cout<<"Maximum Subarray Sum: "<<maxSum<<endl;
//     return 0;
// }


