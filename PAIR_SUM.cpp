// //                                                      PAIR SUM (BRUTE FORCE APPROACH)
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[]={2,7,11,15};
//     int n=4;
//     int target=22;
//
//     for (int i=0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             if (arr[i]+arr[j]==target) {
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------

// //                                              OPTIMAL APPROACH
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[]={2,7,11,15};
//     int n=4;
//     int target=22;
//
//     int i=0;
//     int j=n-1;
//
//     while (i<j) {
//         int pairSum=arr[i]+arr[j];
//         if (pairSum>target) {
//             j--;
//         }
//         else if (pairSum<target) {
//             i++;
//         }
//         else {
//             cout<<"Pairs are: "<< i<<" "<<j<<endl;
//             break;
//         }
//     }
//     return 0;
// }


