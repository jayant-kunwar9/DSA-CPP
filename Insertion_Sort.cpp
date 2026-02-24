// #include <iostream>
// using namespace std;
//
// void insertionSort(int arr[], int n) {
//
//     for (int i =1;i<n;i++) {
//         int key = arr[i];     // element to place
//
//         int j =i-1;
//
//         while (j>=0 && arr[j]>key) {
//             arr[j+1]=arr[j];     // shift bigger element to right
//             j--;
//         }
//         arr[j+1]=key;     // place key at correct position
//     }
// }
//
// int main() {
//     int arr[]= {45,2,56,78,256,22,24,67,65};
//     int n =9;
//
//     insertionSort(arr,n);
//
//     cout<<"Insertion Sort: ";
//
//     for (int i  =0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }