
// //                                               MAJORITY ELEMENT (BRUTE FORCE APPROACH)
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[]={1,2,2,1,1};
//     int n=5;
//
//     for (int i=0;i<n;i++) {
//         int frequency=0;
//         for (int j=0;j<n;j++) {
//             if (arr[i]==arr[j]) {
//                 frequency++;
//             }
//         }
//
//         if (frequency>n/2) {
//             cout<<arr[i]<<endl;
//             break;
//         }
//     }
//     return 0;
// }


//-----------------------------------------------------------------------------------------------------------------------

// //                                               MORE OPTIMISE APPROACH (SORTNG APPROCH)
//
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     int arr[]={1,2,2,1,1};
//     int n=5;
//
//     sort(arr,arr+n);
//
//     int frequency=1;
//     int ans=arr[0];
//
//     for (int i=1;i<n;i++) {
//         if (arr[i]==arr[i-1]) {
//             frequency++;
//         }
//         else {
//             frequency=1;
//             ans=arr[i];
//
//         }
//
//         if (frequency>n/2) {
//             cout<<"Majority Element: "<<ans<<endl;
//             break;
//         }
//     }
// return 0;
// }

//----------------------------------------------------------------------------------------------------------------------

// //                                                 MOORE'S VOTING APPROACH
//
// #include <iostream>
// using namespace std;
//
// int main() {
//
//     int arr[]={1,2,2,1,1};
//     int n=5;
//
//     int freq=0;
//     int ans=0;
//
//     for (int i=0;i<n;i++) {
//         if (freq==0) {
//             ans=arr[i];
//         }
//         else if (ans==arr[i]) {
//             freq++;
//         }
//         else {
//             freq--;
//         }
//     }
//     cout<<ans<<endl;
// }