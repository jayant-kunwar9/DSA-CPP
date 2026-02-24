//                                              DELETION OF FIRST INDEX

// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int pos =0;
//     for (int i=pos; i<n-1;i++) {
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// //                                            DELETION OF END INDEX
//
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int pos=n-1;
//     if (pos=n-1) {         // IF POS IS LAST INDEX , JUST REMOVE THE VALUE AT THE INDEX(n--),
//         n--;
//     }
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

// ------------------------------------------------------------------------------

//                                     DELETION AT ANY INDEX

// #include <iostream>
// using namespace std;
// int main() {
//
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int pos=2;
//     for (int i=pos;i<n-1;i++) {
//         arr[i]=arr[i+1];
//     }
//     n--;
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

//                                              DELETION BY VALUE

// #include <iostream>
// using namespace std;
//
// int main() {
//
//     int arr[5]={10,20,30,40,50};
//     int n=5;
//     int val=30;
//
//     int pos=-1;
//     for (int i=0;i<n;i++) {
//         if (arr[i]==val) {
//             pos=i;
//             break;
//         }
//     }
//         if (pos==-1) {
//             cout<<"Number not found!"<<endl;
//         }
//
//
//     for (int i=pos;i<n-1;i++) {
//         arr[i]=arr[i+1];
//     }
//     n--;
//
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
