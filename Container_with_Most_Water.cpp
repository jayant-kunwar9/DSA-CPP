// //                                                 BRUTE FORCE APPROACH
//
// #include <iostream>
// #include<algorithm>
// using namespace std;
//
// int  maxWater(int arr[], int n) {
//     int maxWater=0;
//     for (int i =0;i<n;i++) {
//         for (int j=i+1;j<n;j++) {
//             int height = min(arr[i],arr[j]);
//             int width = j-i;
//             int area = height * width;
//
//             maxWater = max(maxWater,area);
//         }
//     }
//     return maxWater;
// }
//
//
// int main(){
//     int arr[]={1,8,6,2,5,4,8,3,7};
//     int n = 9;
//
//     cout<<maxWater(arr, n)<<endl;
//
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------

// //                                                   OPTIMAL APPROACH  ( 2 POINTER APPROACH )
//
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int maxWater(int arr[], int n) {
//     int maxWater =0;
//     int leftmostSide=0;
//     int rightmostSide=n-1;
//
//     while (leftmostSide<rightmostSide) {
//         int width =  rightmostSide - leftmostSide;
//         int height = min(arr[leftmostSide], arr[rightmostSide]);
//
//         int currWater = width * height;
//
//         maxWater= max(maxWater, currWater);
//
//         arr[leftmostSide]<arr[rightmostSide]?leftmostSide++:rightmostSide--;         // this is terniary representation of IF - ELSE ....
//
//     }
//     return maxWater;
// }
//
// int main() {
//
//     int arr[]={1,8,6,2,5,4,8,3,7};
//     int n = 9;
//
//     cout<<maxWater(arr, n)<<endl;
//
//     return 0;
//
// }
