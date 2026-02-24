// //                                 When we use Selection Sort :  when the array or vector size is small....
//
// //                                                      T(C)= O(n^2)
//
//
// #include <iostream>
// using namespace std;
//
// void  selectionSort(int arr[], int n ) {
//
//     for (int i =0;i<n-1;i++) {
//         int minIndex = i ;    // assume curr is minIndex
//
//         for (int j =i+1; j<n;j++) {     // search in remaining unsorted part
//             if (arr[j]<arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);      // swap smallest with current position
//     }
// }
//
// int main() {
//
//     int arr []= {1,5,6,87,94,23,12,3,2,4};
//     int n = 10;
//
//    selectionSort(arr,n);
//
//     cout<<"Selection sort: ";
//
//     for (int i =0; i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }